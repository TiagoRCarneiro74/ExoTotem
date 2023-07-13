//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AdmMadero.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
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
void __fastcall TForm8::Voltar(TObject *Sender)
{
	dynamic_cast <TForm*> (this->Owner)->Show();
    delete this;
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Fechar(TObject *Sender, TCloseAction &Action)
{
    dynamic_cast <TForm*> (this->Owner)->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Alterar(TObject *Sender)
{
	String p,temp;

	p = Edit1->Text;
	temp = "update madero set Preço = "+p+" where Nome = 'Cheeseburger'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit2->Text;
	temp = "update madero set Preço = "+p+" where Nome = 'Bacon Duplo'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit3->Text;
	temp = "update madero set Preço = "+p+" where Nome = 'Kids'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit4->Text;
	temp = "update madero set Preço = "+p+" where Nome = 'Batata Frita'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit5->Text;
	temp = "update madero set Preço = "+p+" where Nome = 'Martini'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit6->Text;
	temp = "update madero set Preço = "+p+" where Nome = 'Vegetariano'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);
}
//---------------------------------------------------------------------------
