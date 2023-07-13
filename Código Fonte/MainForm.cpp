//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainForm.h"
#include "RForm.h"
#include "LoginAdm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMain *FMain;
//---------------------------------------------------------------------------
__fastcall TFMain::TFMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFMain::BRestaurantClick(TObject *Sender)
{
	TFRestaurant* FRestaurant = new TFRestaurant(this);
	FRestaurant->MakeFullyVisible();
	FRestaurant->Show();
	this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TFMain::adm(TObject *Sender)
{
	TForm1* LoginAdm = new TForm1(this);
	LoginAdm->MakeFullyVisible();
	LoginAdm->Show();
    this->Hide();
}
//---------------------------------------------------------------------------

