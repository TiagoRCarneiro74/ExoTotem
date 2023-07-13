//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RForm.h"
#include "MainForm.h"
#include "McDonaldsForm.h"
#include "Pizzaria.h"
#include "MaderoForm.h"
#include "KFCForm.h"
#include "BKForm.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFRestaurant *FRestaurant;
//---------------------------------------------------------------------------
__fastcall TFRestaurant::TFRestaurant(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFRestaurant::FormClose(TObject *Sender, TCloseAction &Action)
{
	dynamic_cast <TFMain*>(this->Owner)->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFRestaurant::Image3Click(TObject *Sender)
{
	TFMcDonalds* FMcDonalds = new TFMcDonalds(this);
	FMcDonalds->MakeFullyVisible();
	FMcDonalds->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFRestaurant::Button1Click(TObject *Sender)
{
	dynamic_cast <TFMain*>(this->Owner)->Show();
    this->Hide();
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

void __fastcall TFRestaurant::Pizzaria(TObject *Sender)
{
	TForm5* Pizzaria = new TForm5(this);
	Pizzaria->MakeFullyVisible();
	Pizzaria->Show();
    this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFRestaurant::Abre_Madero(TObject *Sender)
{
	TFMadero* Madero = new TFMadero (this);
	Madero->Show();
    this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFRestaurant::Ir_KFC(TObject *Sender)
{
	TFKfc* kfc = new TFKfc (this);
	kfc->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFRestaurant::Ir_BK(TObject *Sender)
{
	TFBurguerKing* bk = new TFBurguerKing (this);
	bk->Show();
    this->Hide();
}
//---------------------------------------------------------------------------

