object Form6: TForm6
  Left = 0
  Top = 0
  Caption = 'Alterar a Senha'
  ClientHeight = 201
  ClientWidth = 321
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = Fechar
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 29
    Width = 83
    Height = 13
    Caption = 'DIGITE O LOGIN:'
  end
  object Label2: TLabel
    Left = 24
    Top = 61
    Width = 125
    Height = 13
    Caption = 'DIGITE A SENHA ANTIGA:'
  end
  object Label3: TLabel
    Left = 24
    Top = 96
    Width = 115
    Height = 13
    Caption = 'DIGITE A NOVA SENHA:'
  end
  object Label4: TLabel
    Left = 24
    Top = 128
    Width = 117
    Height = 13
    Caption = 'REPITA A NOVA SENHA:'
  end
  object DBText1: TDBText
    Left = 24
    Top = 147
    Width = 65
    Height = 17
    DataField = 'Senha'
    DataSource = DataSource1
    Visible = False
  end
  object Edit1: TEdit
    Left = 168
    Top = 26
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 168
    Top = 58
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 168
    Top = 93
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object Edit4: TEdit
    Left = 168
    Top = 125
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object Button1: TButton
    Left = 48
    Top = 168
    Width = 75
    Height = 25
    Caption = 'Voltar'
    TabOrder = 4
    OnClick = Voltar
  end
  object Button2: TButton
    Left = 184
    Top = 168
    Width = 91
    Height = 25
    Caption = 'Alterar a senha'
    TabOrder = 5
    OnClick = Altera_Senha
  end
  object SQLConnection1: TSQLConnection
    ConnectionName = 'conex2'
    DriverName = 'MySQL'
    LoginPrompt = False
    Params.Strings = (
      'DriverName=MySQL'
      'DriverUnit=Data.DBXMySQL'
      
        'DriverPackageLoader=TDBXDynalinkDriverLoader,DbxCommonDriver270.' +
        'bpl'
      
        'DriverAssemblyLoader=Borland.Data.TDBXDynalinkDriverLoader,Borla' +
        'nd.Data.DbxCommonDriver,Version=24.0.0.0,Culture=neutral,PublicK' +
        'eyToken=91d62ebb5b0d1b1b'
      
        'MetaDataPackageLoader=TDBXMySqlMetaDataCommandFactory,DbxMySQLDr' +
        'iver270.bpl'
      
        'MetaDataAssemblyLoader=Borland.Data.TDBXMySqlMetaDataCommandFact' +
        'ory,Borland.Data.DbxMySQLDriver,Version=24.0.0.0,Culture=neutral' +
        ',PublicKeyToken=91d62ebb5b0d1b1b'
      'LibraryName=dbxmys.dll'
      'LibraryNameOsx=libsqlmys.dylib'
      'VendorLib=LIBMYSQL.dll'
      'VendorLibWin64=libmysql.dll'
      'VendorLibOsx=libmysqlclient.dylib'
      'HostName=localhost'
      'Database=geral'
      'User_Name=root'
      'Password=root'
      'MaxBlobSize=-1'
      'LocaleCode=0000'
      'Compressed=False'
      'Encrypted=False'
      'BlobSize=-1'
      'ErrorResourceFile=')
    Connected = True
    Left = 144
    Top = 168
  end
  object SQLTable1: TSQLTable
    Active = True
    MaxBlobSize = -1
    SQLConnection = SQLConnection1
    TableName = 'tsenha'
    Left = 120
    Top = 16
  end
  object DataSource1: TDataSource
    DataSet = SQLTable1
    Left = 288
    Top = 168
  end
  object SQLQuery1: TSQLQuery
    DataSource = DataSource1
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLConnection1
    Left = 8
    Top = 8
  end
end
