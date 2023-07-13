//---------------------------------------------------------------------------

#ifndef BKFormH
#define BKFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "CFrame.h"
#include <Data.DB.hpp>
#include <Data.DBXMySQL.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TFBurguerKing : public TForm
{
__published:	// IDE-managed Components
	TFrame1 *Frame11;
	TDBText *DBText1;
	TDBText *DBText10;
	TDBText *DBText11;
	TDBText *DBText12;
	TDBText *DBText2;
	TDBText *DBText3;
	TDBText *DBText4;
	TDBText *DBText5;
	TDBText *DBText6;
	TDBText *DBText7;
	TDBText *DBText8;
	TDBText *DBText9;
	TSQLConnection *SQLConnection1;
	TSQLTable *SQLTable1;
	TSQLTable *SQLTable2;
	TSQLTable *SQLTable3;
	TSQLTable *SQLTable4;
	TSQLTable *SQLTable5;
	TSQLTable *SQLTable6;
	TDataSource *DataSource1;
	TDataSource *DataSource2;
	TDataSource *DataSource3;
	TDataSource *DataSource4;
	TDataSource *DataSource5;
	TDataSource *DataSource6;
	void __fastcall Voltar(TObject *Sender);
	void __fastcall Fechar(TObject *Sender, TCloseAction &Action);
	void __fastcall Concluir(TObject *Sender);
private:	// User declarations
float valorTotal;
public:		// User declarations
	__fastcall TFBurguerKing(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFBurguerKing *FBurguerKing;
//---------------------------------------------------------------------------
#endif
