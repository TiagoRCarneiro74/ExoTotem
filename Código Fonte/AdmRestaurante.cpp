//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AdmRestaurante.h"
#include "AdmMcDonalds.cpp"
#include "AdmPizzaria.h"
#include "AdmMadero.h"
#include "AdmKFC.h"
#include "AdmBK.h"
#include "AlteraSenha.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Voltar(TObject *Sender)
{
	dynamic_cast <TForm*> (this->Owner->Owner)->Show();
    delete this->Owner;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::McDonalds(TObject *Sender)
{
	TForm3* mc = new TForm3(this);
	mc->MakeFullyVisible();
	mc->Show();
    this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Fechar(TObject *Sender, TCloseAction &Action)
{
	dynamic_cast <TForm*> (this->Owner->Owner)->Show();
	delete (this->Owner);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Ir_Para_Altera_Senha(TObject *Sender)
{
	TForm6* Alt = new TForm6 (this);
	Alt->MakeFullyVisible();
	Alt->Show();
    this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AbrePizzaria(TObject *Sender)
{
	TForm7* Pizzaria = new TForm7 (this);
	Pizzaria->MakeFullyVisible();
	Pizzaria->Show();
    this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::AbreMadero(TObject *Sender)
{
	TForm8* madero = new TForm8 (this);
	madero->Show();
    this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Ir_Para_KFC(TObject *Sender)
{
	TForm10* kfc = new TForm10 (this);
	kfc->Show();
    this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Ir_Para_BK(TObject *Sender)
{
	TForm11* bk = new TForm11 (this);
	bk->Show();
    this->Hide();
}
//---------------------------------------------------------------------------

