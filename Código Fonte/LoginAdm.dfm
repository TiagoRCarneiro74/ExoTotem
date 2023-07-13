object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Login como Administrador'
  ClientHeight = 201
  ClientWidth = 445
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = Fecha
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 112
    Top = 56
    Width = 35
    Height = 13
    Caption = 'LOGIN:'
  end
  object Label2: TLabel
    Left = 112
    Top = 104
    Width = 37
    Height = 13
    Caption = 'SENHA:'
  end
  object DBText1: TDBText
    Left = 24
    Top = 56
    Width = 65
    Height = 17
    DataField = 'Senha'
    DataSource = DataSource1
    Visible = False
  end
  object Edit1: TEdit
    Left = 192
    Top = 53
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 192
    Top = 101
    Width = 121
    Height = 19
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Password Dots'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object Button1: TButton
    Left = 238
    Top = 152
    Width = 75
    Height = 25
    Caption = 'Fazer Login'
    TabOrder = 2
    OnClick = Login
  end
  object Button2: TButton
    Left = 112
    Top = 152
    Width = 75
    Height = 25
    Caption = 'Voltar'
    TabOrder = 3
    OnClick = Voltar
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
    Left = 360
    Top = 32
  end
  object SQLTable1: TSQLTable
    Active = True
    MaxBlobSize = -1
    SQLConnection = SQLConnection1
    TableName = 'tsenha'
    Left = 368
    Top = 88
  end
  object DataSource1: TDataSource
    DataSet = SQLTable1
    Left = 360
    Top = 144
  end
end
