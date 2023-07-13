//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AdmKFC.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
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
void __fastcall TForm10::Fechar(TObject *Sender, TCloseAction &Action)
{
    dynamic_cast <TForm*> (this->Owner)->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Alterar(TObject *Sender)
{
	String temp, p;
	p = Edit1->Text;
	temp = "update kfc set Preço = "+p+" where Nome = 'Balde'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit2->Text;
	temp = "update kfc set Preço = "+p+" where Nome = 'Balde Grande'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit3->Text;
	temp = "update kfc set Preço = "+p+" where Nome = 'Minibalde'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit4->Text;
	temp = "update kfc set Preço = "+p+" where Nome = 'Batata Frita'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit5->Text;
	temp = "update kfc set Preço = "+p+" where Nome = 'Refrigerante'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit6->Text;
	temp = "update kfc set Preço = "+p+" where Nome = 'Balde Sobrecoxa'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

    ShowMessage("Alteração feita com sucesso!");
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Voltar(TObject *Sender)
{
    dynamic_cast <TForm*> (this->Owner)->Show();
	delete this;
}
//---------------------------------------------------------------------------
