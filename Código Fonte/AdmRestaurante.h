//---------------------------------------------------------------------------

#ifndef AdmRestauranteH
#define AdmRestauranteH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
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
	TLabel *Label5;
	TButton *Button1;
	TButton *Button2;
	TImage *Image4;
	TLabel *Label6;
	void __fastcall Voltar(TObject *Sender);
	void __fastcall McDonalds(TObject *Sender);
	void __fastcall Fechar(TObject *Sender, TCloseAction &Action);
	void __fastcall Ir_Para_Altera_Senha(TObject *Sender);
	void __fastcall AbrePizzaria(TObject *Sender);
	void __fastcall AbreMadero(TObject *Sender);
	void __fastcall Ir_Para_KFC(TObject *Sender);
	void __fastcall Ir_Para_BK(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
