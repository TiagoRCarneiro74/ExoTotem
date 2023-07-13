//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DadosCartao.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Prosseguir(TObject *Sender)
{
	if (Edit1->Text ==  "" || Edit2->Text == "" || Edit3->Text == "" || Edit4->Text == "") ShowMessage("Algum dos campos está vazio. Verifique os dados.");
	else {
		ShowMessage("Compra Confirmada!");
        dynamic_cast <TForm*> (this->Owner->Owner->Owner->Owner)->Show();
		delete (this->Owner->Owner->Owner);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Voltar(TObject *Sender)
{
    delete this;
}
//---------------------------------------------------------------------------
