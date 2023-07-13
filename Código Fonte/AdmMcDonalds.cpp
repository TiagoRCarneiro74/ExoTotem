//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AdmMcDonalds.h"
#include "string.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CFrame"
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
	//SQLTable1->Edit();
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
void __fastcall TForm3::Fechar(TObject *Sender, TCloseAction &Action)
{
	dynamic_cast <TForm*> (this->Owner)->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	String temp, p;
	p = Edit1->Text;
	temp = "update mcdonalds set Preço = "+p+" where Nome = 'Big Mac'";
	SQLQuery1->SQL->Text = temp;
	SQLQuery1->ExecSQL(true);

	p = Edit2->Text;
	temp = "update mcdonalds set Preço = "+p+" where Nome = 'Milkshake'";
	SQLQuery2->SQL->Text = temp;
	SQLQuery2->ExecSQL(true);

	p = Edit3->Text;
	temp = "update mcdonalds set Preço = "+p+" where Nome = 'Combo Cheeseburger'";
	SQLQuery3->SQL->Text = temp;
	SQLQuery3->ExecSQL(true);

	p = Edit4->Text;
	temp = "update mcdonalds set Preço = "+p+" where Nome = 'Combo 4x'";
	SQLQuery4->SQL->Text = temp;
	SQLQuery4->ExecSQL(true);

	p = Edit5->Text;
	temp = "update mcdonalds set Preço = "+p+" where Nome = 'Combo Big Mac'";
	SQLQuery5->SQL->Text = temp;
	SQLQuery5->ExecSQL(true);

	p = Edit6->Text;
	temp = "update mcdonalds set Preço = "+p+" where Nome = 'Batata Frita'";
	SQLQuery6->SQL->Text = temp;
	SQLQuery6->ExecSQL(true);

    ShowMessage("Alteração feita com sucesso!");
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Voltar(TObject *Sender)
{
	dynamic_cast <TForm*> (this->Owner)->Show();
    delete this;
}
//---------------------------------------------------------------------------
