object Form9: TForm9
  Left = 0
  Top = 0
  Caption = 'Dados do Cart'#227'o'
  ClientHeight = 131
  ClientWidth = 547
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 32
    Width = 110
    Height = 13
    Caption = 'N'#218'MERO DO CART'#195'O:'
  end
  object Label2: TLabel
    Left = 43
    Top = 64
    Width = 99
    Height = 13
    Caption = 'DATA DE VALIDADE:'
  end
  object Label3: TLabel
    Left = 328
    Top = 64
    Width = 37
    Height = 13
    Caption = 'SENHA:'
  end
  object Label4: TLabel
    Left = 348
    Top = 32
    Width = 17
    Height = 13
    Caption = 'CV:'
  end
  object Edit1: TEdit
    Left = 168
    Top = 29
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 168
    Top = 61
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 392
    Top = 29
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object Edit4: TEdit
    Left = 392
    Top = 61
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object Button1: TButton
    Left = 308
    Top = 98
    Width = 75
    Height = 25
    Caption = 'Ok'
    TabOrder = 4
    OnClick = Prosseguir
  end
  object Button2: TButton
    Left = 184
    Top = 98
    Width = 75
    Height = 25
    Caption = 'Voltar'
    TabOrder = 5
    OnClick = Voltar
  end
end
