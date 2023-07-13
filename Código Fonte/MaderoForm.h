//---------------------------------------------------------------------------

#ifndef MaderoFormH
#define MaderoFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "CFrame.h"
#include <Vcl.DBCtrls.hpp>
#include <Data.DB.hpp>
#include <Data.DBXMySQL.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
//---------------------------------------------------------------------------
class TFMadero : public TForm
{
__published:	// IDE-managed Components
	TFrame1 *Frame11;
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
	TDBText *DBText1;
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
	TSQLConnection *SQLConnection1;
	void __fastcall Concluir(TObject *Sender);
	void __fastcall Voltar(TObject *Sender);
	void __fastcall Fechar(TObject *Sender, TCloseAction &Action);
private:	// User declarations
float valorTotal;
public:		// User declarations
	__fastcall TFMadero(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFMadero *FMadero;
//---------------------------------------------------------------------------
#endif
