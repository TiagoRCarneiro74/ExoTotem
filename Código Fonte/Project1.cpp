//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Pizzaria.cpp", Form5);
USEFORM("PayForm.cpp", FPay);
USEFORM("McDonaldsForm.cpp", FMcDonalds);
USEFORM("MainForm.cpp", FMain);
USEFORM("MaderoForm.cpp", FMadero);
USEFORM("Unit4.cpp", Form4);
USEFORM("RFrame.cpp", Frame2); /* TFrame: File Type */
USEFORM("RForm.cpp", FRestaurant);
USEFORM("AlteraSenha.cpp", Form6);
USEFORM("AdmRestaurante.cpp", Form2);
USEFORM("AdmPizzaria.cpp", Form7);
USEFORM("AdmMcDonalds.cpp", Form3);
USEFORM("AdmMadero.cpp", Form8);
USEFORM("LoginAdm.cpp", Form1);
USEFORM("KFCForm.cpp", FKfc);
USEFORM("DadosCartao.cpp", Form9);
USEFORM("CFrame.cpp", Frame1); /* TFrame: File Type */
USEFORM("BKForm.cpp", FBurguerKing);
USEFORM("AdmKFC.cpp", Form10);
USEFORM("AdmBK.cpp", Form11);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFMain), &FMain);
		Application->CreateForm(__classid(TFRestaurant), &FRestaurant);
		Application->CreateForm(__classid(TFMcDonalds), &FMcDonalds);
		Application->CreateForm(__classid(TFBurguerKing), &FBurguerKing);
		Application->CreateForm(__classid(TFKfc), &FKfc);
		Application->CreateForm(__classid(TFMadero), &FMadero);
		Application->CreateForm(__classid(TFPay), &FPay);
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->CreateForm(__classid(TForm7), &Form7);
		Application->CreateForm(__classid(TForm8), &Form8);
		Application->CreateForm(__classid(TForm9), &Form9);
		Application->CreateForm(__classid(TForm10), &Form10);
		Application->CreateForm(__classid(TForm11), &Form11);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
