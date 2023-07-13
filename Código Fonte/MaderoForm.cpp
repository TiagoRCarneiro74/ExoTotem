//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MaderoForm.h"
#include "PayForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CFrame"
#pragma resource "*.dfm"
TFMadero *FMadero;
//---------------------------------------------------------------------------
__fastcall TFMadero::TFMadero(TComponent* Owner)
	: TForm(Owner)
{
    valorTotal = 0;
	SQLTable2->MoveBy(1);
	SQLTable3->MoveBy(2);
	SQLTable4->MoveBy(3);
	SQLTable5->MoveBy(4);
    SQLTable6->MoveBy(5);
}
//---------------------------------------------------------------------------

void __fastcall TFMadero::Concluir(TObject *Sender)
{
    valorTotal += (Frame11->Edit1->Text.ToInt() * StrToFloat(DBText2->Caption));
	valorTotal += (Frame11->Edit2->Text.ToInt() * StrToFloat(DBText8->Caption));
	valorTotal += (Frame11->Edit3->Text.ToInt() * StrToFloat(DBText6->Caption));
	valorTotal += (Frame11->Edit4->Text.ToInt() * StrToFloat(DBText4->Caption));
	valorTotal += (Frame11->Edit5->Text.ToInt() * StrToFloat(DBText12->Caption));
	valorTotal += (Frame11->Edit6->Text.ToInt() * StrToFloat(DBText10->Caption));
	if (valorTotal != 0) {
		TFPay* FPay = new TFPay(this, valorTotal);
		FPay->MakeFullyVisible();
		FPay->Show();
	}
	else ShowMessage("Pedido não efetuado. Não há nenhum produto selecionado.");
    valorTotal = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFMadero::Voltar(TObject *Sender)
{
	dynamic_cast <TForm*> (this->Owner)->Show();
    delete this;
}
//---------------------------------------------------------------------------

void __fastcall TFMadero::Fechar(TObject *Sender, TCloseAction &Action)
{
    dynamic_cast <TForm*> (this->Owner)->Show();
}
//---------------------------------------------------------------------------

