//---------------------------------------------------------------------------

#ifndef PayFormH
#define PayFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFPay : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TRadioButton *BPagamentoCartao;
	TRadioButton *BPagamentoDinheiro;
	TImage *Image1;
	TImage *Image2;
	TButton *BPagamentoConcluir;
	void __fastcall BPagamentoDinheiroClick(TObject *Sender);
	void __fastcall BPagamentoCartaoClick(TObject *Sender);
	void __fastcall BPagamentoConcluirClick(TObject *Sender);
private:	// User declarations
	const float valor_a_ser_pago;
	int metodo_pagamento;
public:		// User declarations
	__fastcall TFPay(TComponent* Owner, float valor_a_ser_pago);
};
//---------------------------------------------------------------------------
extern PACKAGE TFPay *FPay;
//---------------------------------------------------------------------------
#endif
