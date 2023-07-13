//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "McDonaldsForm.h"
#include "RForm.h"
#include "PayForm.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CFrame"
#pragma resource "*.dfm"
TFMcDonalds *FMcDonalds;
//---------------------------------------------------------------------------
__fastcall TFMcDonalds::TFMcDonalds(TComponent* Owner)
	: TForm(Owner)
{
	valorTotal = 0;
	SQLTable2->MoveBy(1);
	SQLTable3->MoveBy(2);
	SQLTable4->MoveBy(3);
	SQLTable5->MoveBy(4);
	SQLTable6->MoveBy(5);
	//int a = (int) SQLTable1;
	//ShowMessage(a);
}
//---------------------------------------------------------------------------
void __fastcall TFMcDonalds::FormClose(TObject *Sender, TCloseAction &Action)
{
	 dynamic_cast <TFRestaurant*>(this->Owner)->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFMcDonalds::Frame11BConcluirClick(TObject *Sender)
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

void __fastcall TFMcDonalds::Frame11BVoltarClick(TObject *Sender)
{
	dynamic_cast <TFRestaurant*>(this->Owner)->Show();
	this->Hide();
}
//---------------------------------------------------------------------------















