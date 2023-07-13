//---------------------------------------------------------------------------

#ifndef RFormH
#define RFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFRestaurant : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TLabel *Label1;
	TImage *Image2;
	TLabel *Label2;
	TImage *Image3;
	TLabel *Label3;
	TImage *ImgBK;
	TLabel *Label4;
	TButton *Button1;
	TLabel *Label6;
	TImage *Image4;
	TLabel *Label5;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Pizzaria(TObject *Sender);
	void __fastcall Abre_Madero(TObject *Sender);
	void __fastcall Ir_KFC(TObject *Sender);
	void __fastcall Ir_BK(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFRestaurant(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFRestaurant *FRestaurant;
//---------------------------------------------------------------------------
#endif
