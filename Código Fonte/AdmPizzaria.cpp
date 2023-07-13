//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AdmPizzaria.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
	SQLTable2->MoveBy(1);
	SQLTable3->MoveBy(2);
	SQLTable4->MoveBy(3);
	SQLTable5->MoveBy(4);
	SQLTable6->MoveBy(5);
	Edit1->Text = DBText2->Caption;
	Edit2->Text = DBText4->Caption;
	Edit3->Text = DBText6->Caption;
	Edit4->Text = DBText8->Caption;
	Edit5->Text = DBText10->Caption;
	Edit6->Text = DBText12->Caption;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Alterar(TObject *Sender)
{
	String temp,p,d;

	if (RadioButton2->Checked) d = "PreçoP";
	else if (RadioButton3->Checked) d = "PreçoM";
	else if (RadioButton4->Checked) d = "PreçoG";

	p = Edit1->Text;
	temp = "update pizzaria set "+d+" = "+p+" where Nome = 'Muçarela'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit2->Text;
	temp = "update pizzaria set "+d+" = "+p+" where Nome = 'Calabresa'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit3->Text;
	temp = "update pizzaria set "+d+" = "+p+" where Nome = 'Quatro Queijos'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit4->Text;
	temp = "update pizzaria set "+d+" = "+p+" where Nome = 'Margherita'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit5->Text;
	temp = "update pizzaria set "+d+" = "+p+" where Nome = 'Corn Bacon'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit6->Text;
	temp = "update pizzaria set "+d+" = "+p+" where Nome = 'Da Casa'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

    ShowMessage("Alterações feitas com sucesso!");
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Voltar(TObject *Sender)
{
	dynamic_cast <TForm*> (this->Owner)->Show();
	delete this;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Fechar(TObject *Sender, TCloseAction &Action)
{
    dynamic_cast <TForm*> (this->Owner)->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Escolha_Pequena(TObject *Sender)
{
	DBText2->DataField = "PreçoP";
	DBText4->DataField = "PreçoP";
	DBText6->DataField = "PreçoP";
	DBText8->DataField = "PreçoP";
	DBText10->DataField = "PreçoP";
	DBText12->DataField = "PreçoP";
	Edit1->Text = DBText2->Caption;
	Edit2->Text = DBText4->Caption;
	Edit3->Text = DBText6->Caption;
	Edit4->Text = DBText8->Caption;
	Edit5->Text = DBText10->Caption;
	Edit6->Text = DBText12->Caption;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Escolha_Media(TObject *Sender)
{
	DBText2->DataField = "PreçoM";
	DBText4->DataField = "PreçoM";
	DBText6->DataField = "PreçoM";
	DBText8->DataField = "PreçoM";
	DBText10->DataField = "PreçoM";
	DBText12->DataField = "PreçoM";
	Edit1->Text = DBText2->Caption;
	Edit2->Text = DBText4->Caption;
	Edit3->Text = DBText6->Caption;
	Edit4->Text = DBText8->Caption;
	Edit5->Text = DBText10->Caption;
	Edit6->Text = DBText12->Caption;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Escolha_Grande(TObject *Sender)
{
	DBText2->DataField = "PreçoG";
	DBText4->DataField = "PreçoG";
	DBText6->DataField = "PreçoG";
	DBText8->DataField = "PreçoG";
	DBText10->DataField = "PreçoG";
	DBText12->DataField = "PreçoG";
	Edit1->Text = DBText2->Caption;
	Edit2->Text = DBText4->Caption;
	Edit3->Text = DBText6->Caption;
	Edit4->Text = DBText8->Caption;
	Edit5->Text = DBText10->Caption;
	Edit6->Text = DBText12->Caption;
}
//---------------------------------------------------------------------------
