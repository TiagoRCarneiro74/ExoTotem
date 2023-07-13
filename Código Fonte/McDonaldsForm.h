//---------------------------------------------------------------------------

#ifndef McDonaldsFormH
#define McDonaldsFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "CFrame.h"
#include <Vcl.DBCtrls.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Data.DBXMySQL.hpp>
#include <Data.SqlExpr.hpp>
#include <Data.FMTBcd.hpp>
//---------------------------------------------------------------------------
class TFMcDonalds : public TForm
{
__published:	// IDE-managed Components
	TFrame1 *Frame11;
	TADOConnection *ADOConnection1;
	TDataSource *DataSource1;
	TDBText *DBText1;
	TDBText *DBText2;
	TDataSource *DataSource2;
	TDBText *DBText3;
	TDBText *DBText4;
	TDataSource *DataSource3;
	TDBText *DBText5;
	TDBText *DBText6;
	TDataSource *DataSource4;
	TDBText *DBText7;
	TDBText *DBText8;
	TDataSource *DataSource5;
	TDBText *DBText9;
	TDBText *DBText10;
	TDataSource *DataSource6;
	TDBText *DBText11;
	TDBText *DBText12;
	TSQLTable *SQLTable1;
	TSQLConnection *SQLConnection2;
	TSQLTable *SQLTable2;
	TSQLTable *SQLTable3;
	TSQLTable *SQLTable4;
	TSQLTable *SQLTable5;
	TSQLTable *SQLTable6;
	TSQLConnection *SQLConnection1;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Frame11BConcluirClick(TObject *Sender);
	void __fastcall Frame11BVoltarClick(TObject *Sender);
private:	// User declarations
	float valorTotal;
public:		// User declarations
	__fastcall TFMcDonalds(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFMcDonalds *FMcDonalds;
//---------------------------------------------------------------------------
#endif
