//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Pizzaria.h"
#include "PayForm.h"
#include <stdlib.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
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
void __fastcall TForm5::Fechar(TObject *Sender, TCloseAction &Action)
{
    dynamic_cast <TForm*> (this->Owner)->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Voltar(TObject *Sender)
{
	dynamic_cast <TForm*> (this->Owner)->Show();
    delete this;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Escolha_Pequena(TObject *Sender)
{
	DBText2->DataField = "PreçoP";
	DBText4->DataField = "PreçoP";
	DBText6->DataField = "PreçoP";
	DBText8->DataField = "PreçoP";
	DBText10->DataField = "PreçoP";
	DBText12->DataField = "PreçoP";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Escolha_Media(TObject *Sender)
{
	DBText2->DataField = "PreçoM";
	DBText4->DataField = "PreçoM";
	DBText6->DataField = "PreçoM";
	DBText8->DataField = "PreçoM";
	DBText10->DataField = "PreçoM";
	DBText12->DataField = "PreçoM";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Escolha_Grande(TObject *Sender)
{
	DBText2->DataField = "PreçoG";
	DBText4->DataField = "PreçoG";
	DBText6->DataField = "PreçoG";
	DBText8->DataField = "PreçoG";
	DBText10->DataField = "PreçoG";
	DBText12->DataField = "PreçoG";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Logica(TObject *Sender, bool &AllowChange)
{
	String a, b;
	a = IntToStr(3 - RadioButton2->Checked);
	b = "Aviso: o limite de sabores para o tamanho de pizza selecionado é "+a+".";
	if (StrToInt(Edit1->Text) + StrToInt(Edit2->Text) + StrToInt(Edit3->Text) + StrToInt(Edit4->Text) + StrToInt(Edit5->Text) + StrToInt(Edit6->Text) > 3 - RadioButton2->Checked) {
		ShowMessage(b);
		TWinControl* prealvo = dynamic_cast <TUpDown*> (Sender)->Associate;
		TEdit* alvo = static_cast <TEdit*> (prealvo);
		alvo->Text =  StrToInt(alvo->Text) - 1;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Verifica(TObject *Sender, TUDBtnType Button)
{
	String a, b;
	a = IntToStr(3 - RadioButton2->Checked);
	b = "Aviso: o limite de sabores para o tamanho de pizza selecionado é "+a+".";
	if (StrToInt(Edit1->Text) + StrToInt(Edit2->Text) + StrToInt(Edit3->Text) + StrToInt(Edit4->Text) + StrToInt(Edit5->Text) + StrToInt(Edit6->Text) > 3 - RadioButton2->Checked) {
		ShowMessage(b);
		TWinControl* prealvo = dynamic_cast <TUpDown*> (Sender)->Associate;
		TEdit* alvo = static_cast <TEdit*> (prealvo);
		alvo->Text =  StrToInt(alvo->Text) - 1;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Concluir(TObject *Sender)
{
	float sabores = StrToInt(Edit1->Text) + StrToInt(Edit2->Text) + StrToInt(Edit3->Text) + StrToInt(Edit4->Text) + StrToInt(Edit5->Text) + StrToInt(Edit6->Text);
    if (sabores == 0) sabores = 1;
	valorTotal += ((Edit1->Text.ToInt() * StrToFloat(DBText2->Caption)) / sabores);
	valorTotal += ((Edit2->Text.ToInt() * StrToFloat(DBText4->Caption)) / sabores);
	valorTotal += ((Edit3->Text.ToInt() * StrToFloat(DBText6->Caption)) / sabores);
	valorTotal += ((Edit4->Text.ToInt() * StrToFloat(DBText8->Caption)) / sabores);
	valorTotal += ((Edit5->Text.ToInt() * StrToFloat(DBText10->Caption)) / sabores);
	valorTotal += ((Edit6->Text.ToInt() * StrToFloat(DBText12->Caption)) / sabores);
	if (valorTotal != 0) {
	   TFPay* FPay = new TFPay(this, valorTotal);
		FPay->MakeFullyVisible();
		FPay->Show();
	}
	else ShowMessage("Pedido não efetuado. Não há nenhum produto selecionado.");
    valorTotal = 0;
}
//---------------------------------------------------------------------------
