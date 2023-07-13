//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AlteraSenha.h"
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Altera_Senha(TObject *Sender)
{
	String temp = "update tsenha set Senha = '"+Edit3->Text+"' where id = 1";
	if (Edit1->Text == "admin" && Edit2->Text == DBText1->Caption && Edit3->Text == Edit4->Text) {
		SQLQuery1->SQL->Text = temp;
		SQLQuery1->ExecSQL(true);
		ShowMessage("Alteração feita com sucesso!");
	}
	else {
		temp = "Ocorreu algum dos seguintes:\n(1): O nome de usuário está incorreto\n(2): A senha antiga está incorreta\n(3): A nova senha não está idêntica à sua repetição";
		ShowMessage(temp);
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm6::Voltar(TObject *Sender)
{
	dynamic_cast <TForm*> (this->Owner)->Show();
    delete this;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Fechar(TObject *Sender, TCloseAction &Action)
{
    dynamic_cast <TForm*> (this->Owner)->Show();
}
//---------------------------------------------------------------------------
