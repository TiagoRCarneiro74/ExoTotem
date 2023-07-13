//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LoginAdm.h"
#include "AdmRestaurante.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Login(TObject *Sender)
{
	TForm2* AdmRest=NULL;
	if (Edit1->Text == "admin" && Edit2->Text == DBText1->Caption) {
		AdmRest = new TForm2(this);
		AdmRest->MakeFullyVisible();
		AdmRest->Show();
        this->Hide();
	}
    else if (Edit1->Text == "" || Edit2->Text == "") ShowMessage("Algum dos campos não está preenchido. Favor preencher ambos os campos.");
    else ShowMessage("Login e/ou senha incorreto(s).");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Fecha(TObject *Sender, TCloseAction &Action)
{
	dynamic_cast <TForm*> (this->Owner)->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Voltar(TObject *Sender)
{
	dynamic_cast <TForm*> (this->Owner)->Show();
    delete this;
}
//---------------------------------------------------------------------------
