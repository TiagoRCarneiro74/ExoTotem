//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PayForm.h"
#include "DadosCartao.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFPay *FPay;
//---------------------------------------------------------------------------
__fastcall TFPay::TFPay(TComponent* Owner, float valor_a_ser_pago_)
	: TForm(Owner), valor_a_ser_pago(valor_a_ser_pago_), metodo_pagamento(-1)
{
	Label1->Caption = ceil(valor_a_ser_pago * 100.0) / 100.0;
}
//---------------------------------------------------------------------------
void __fastcall TFPay::BPagamentoDinheiroClick(TObject *Sender)
{
	metodo_pagamento = 0;
}
//---------------------------------------------------------------------------

void __fastcall TFPay::BPagamentoCartaoClick(TObject *Sender)
{
	metodo_pagamento = 1;
}
//---------------------------------------------------------------------------

void __fastcall TFPay::BPagamentoConcluirClick(TObject *Sender)
{
	TForm9* a=NULL;
	if(metodo_pagamento == 0){
		//Label1->Caption = 0;
		ShowMessage("Pedido efetuado. Diriga-se ao caixa para realizar o pagamento.");
		dynamic_cast <TForm*> (this->Owner->Owner->Owner)->Show();
		delete (this->Owner->Owner);
	}
	else if(metodo_pagamento == 1){
		//Label1->Caption = 1;
		a = new TForm9 (this);
        a->Show();
	}else{
		//Label1->Caption = -1;
    }
}
//---------------------------------------------------------------------------

