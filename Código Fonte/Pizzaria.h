//---------------------------------------------------------------------------

#ifndef PizzariaH
#define PizzariaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.DB.hpp>
#include <Data.DBXMySQL.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TButton *Button1;
	TSQLConnection *SQLConnection1;
	TDBText *DBText1;
	TSQLTable *SQLTable1;
	TDataSource *DataSource1;
	TSQLTable *SQLTable2;
	TSQLTable *SQLTable3;
	TSQLTable *SQLTable4;
	TSQLTable *SQLTable5;
	TSQLTable *SQLTable6;
	TDataSource *DataSource2;
	TDataSource *DataSource3;
	TDataSource *DataSource4;
	TDataSource *DataSource5;
	TDataSource *DataSource6;
	TDBText *DBText2;
	TDBText *DBText3;
	TDBText *DBText4;
	TDBText *DBText5;
	TDBText *DBText6;
	TDBText *DBText7;
	TDBText *DBText8;
	TDBText *DBText9;
	TDBText *DBText10;
	TDBText *DBText11;
	TDBText *DBText12;
	TEdit *Edit1;
	TUpDown *UpDown1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TUpDown *UpDown2;
	TUpDown *UpDown3;
	TUpDown *UpDown4;
	TUpDown *UpDown5;
	TUpDown *UpDown6;
	TLabel *Label1;
	TButton *BConcluir;
	void __fastcall Fechar(TObject *Sender, TCloseAction &Action);
	void __fastcall Voltar(TObject *Sender);
	void __fastcall Escolha_Pequena(TObject *Sender);
	void __fastcall Escolha_Media(TObject *Sender);
	void __fastcall Escolha_Grande(TObject *Sender);
	void __fastcall Logica(TObject *Sender, bool &AllowChange);
	void __fastcall Verifica(TObject *Sender, TUDBtnType Button);
	void __fastcall Concluir(TObject *Sender);
private:	// User declarations
float valorTotal;
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
