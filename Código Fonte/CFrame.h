//---------------------------------------------------------------------------

#ifndef CFrameH
#define CFrameH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TFrame1 : public TFrame
{
__published:	// IDE-managed Components
	TImage *Image1;
	TLabel *Label1;
	TEdit *Edit1;
	TUpDown *UpDown1;
	TImage *Image3;
	TLabel *Label3;
	TEdit *Edit3;
	TUpDown *UpDown3;
	TImage *Image4;
	TLabel *Label4;
	TEdit *Edit4;
	TUpDown *UpDown4;
	TImage *Image2;
	TLabel *Label2;
	TEdit *Edit2;
	TUpDown *UpDown2;
	TImage *Image5;
	TLabel *Label5;
	TEdit *Edit5;
	TUpDown *UpDown5;
	TImage *Image6;
	TLabel *Label6;
	TEdit *Edit6;
	TUpDown *UpDown6;
	TButton *BConcluir;
	TButton *BVoltar;
private:	// User declarations
public:		// User declarations
	__fastcall TFrame1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrame1 *Frame1;
//---------------------------------------------------------------------------
#endif
