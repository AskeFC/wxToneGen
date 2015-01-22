///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "main.h"

///////////////////////////////////////////////////////////////////////////

MainFrameBase::MainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	MainMenuBar = new wxMenuBar( 0 );
	MainMenuFile = new wxMenu();
	wxMenuItem* MainMenuFileExit;
	MainMenuFileExit = new wxMenuItem( MainMenuFile, wxID_MAINMENUEXIT, wxString( _("E&xit") ) + wxT('\t') + wxT("Alt+X"), wxEmptyString, wxITEM_NORMAL );
	MainMenuFile->Append( MainMenuFileExit );

	MainMenuBar->Append( MainMenuFile, _("&File") );

	MainMenuHelp = new wxMenu();
	wxMenuItem* MainMenuHelpAbout;
	MainMenuHelpAbout = new wxMenuItem( MainMenuHelp, wxID_MAINMENUABOUT, wxString( _("&About...") ) + wxT('\t') + wxT("ALT+A"), wxEmptyString, wxITEM_NORMAL );
	MainMenuHelp->Append( MainMenuHelpAbout );

	MainMenuBar->Append( MainMenuHelp, _("&Help") );

	this->SetMenuBar( MainMenuBar );

	wxBoxSizer* MainSizer;
	MainSizer = new wxBoxSizer( wxHORIZONTAL );

	MainTreeCtrl = new wxTreeCtrl( this, wxID_MAINTREECTRL, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE|wxTR_HAS_BUTTONS|wxTR_HIDE_ROOT|wxTR_SINGLE );
	MainTreeCtrl->SetMinSize( wxSize( 300,411 ) );

	MainSizer->Add( MainTreeCtrl, 0, wxALL, 5 );

	MainNotebook = new wxNotebook( this, wxID_MAINNOTEBOOK, wxDefaultPosition, wxDefaultSize, 0 );
	MainNotebook->SetMinSize( wxSize( 300,411 ) );

	MNBPanel1 = new wxPanel( MainNotebook, wxID_MNBPANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	MNBPanel1->SetMinSize( wxSize( 300,411 ) );

	wxBoxSizer* MNBP1Sizer;
	MNBP1Sizer = new wxBoxSizer( wxVERTICAL );

	MNBPanel1->SetSizer( MNBP1Sizer );
	MNBPanel1->Layout();
	MNBP1Sizer->Fit( MNBPanel1 );
	MainNotebook->AddPage( MNBPanel1, _("First Page"), true );
	MNBPanel2 = new wxPanel( MainNotebook, wxID_MNBPANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* MNBP2Sizer;
	MNBP2Sizer = new wxBoxSizer( wxVERTICAL );

	MNBP2HtmlWin = new wxHtmlWindow( MNBPanel2, wxID_MNBP2HTMLWIN, wxDefaultPosition, wxSize( 322,376 ), wxHW_SCROLLBAR_AUTO );
	MNBP2Sizer->Add( MNBP2HtmlWin, 0, wxALL, 5 );

	MNBPanel2->SetSizer( MNBP2Sizer );
	MNBPanel2->Layout();
	MNBP2Sizer->Fit( MNBPanel2 );
	MainNotebook->AddPage( MNBPanel2, _("Second Page"), false );

	MainSizer->Add( MainNotebook, 1, wxEXPAND | wxALL, 5 );

	this->SetSizer( MainSizer );
	this->Layout();
//	MainStatusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_MAINSTATUSBAR );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Connect( MainMenuFileExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
	this->Connect( MainMenuHelpAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnAboutClick ) );
}

MainFrameBase::~MainFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Disconnect( wxID_MAINMENUEXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
	this->Disconnect( wxID_MAINMENUABOUT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnAboutClick ) );
}

AboutDialog::AboutDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );

	wxFlexGridSizer* AboutDialogSizer;
	AboutDialogSizer = new wxFlexGridSizer( 1, 2, 0, 0 );
	AboutDialogSizer->AddGrowableCol( 1 );
	AboutDialogSizer->SetFlexibleDirection( wxBOTH );
	AboutDialogSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );

	wxGridSizer* ADSubSizer1;
	ADSubSizer1 = new wxGridSizer( 1, 1, 0, 0 );

	ADStaticText = new wxStaticText( this, wxID_ADSTATICTEXT, _("Thanks"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE|wxNO_BORDER|wxTRANSPARENT_WINDOW );
	ADStaticText->Wrap( -1 );
	ADSubSizer1->Add( ADStaticText, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_TOP, 5 );

	AboutDialogStaticline = new wxStaticLine( this, wxID_ADSTATICLINE, wxPoint( 5,5 ), wxSize( 250,240 ), wxLI_HORIZONTAL|wxLI_VERTICAL );
	ADSubSizer1->Add( AboutDialogStaticline, 0, wxALIGN_LEFT|wxALL|wxEXPAND, 5 );

	AboutDialogSizer->Add( ADSubSizer1, 1, wxALIGN_CENTER_HORIZONTAL|wxEXPAND|wxTOP, 5 );

	wxGridSizer* ADSubSizer2;
	ADSubSizer2 = new wxGridSizer( 5, 1, 0, 0 );

	ADButtonCB = new wxButton( this, wxID_ADBUTTONCB, _("Codeblocks"), wxPoint( -1,-1 ), wxDefaultSize, 0 );
	ADSubSizer2->Add( ADButtonCB, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	ADButtonFB = new wxButton( this, wxID_ADBUTTONFB, _("wxFormBuilder"), wxDefaultPosition, wxDefaultSize, 0 );
	ADSubSizer2->Add( ADButtonFB, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	ADButtonWX = new wxButton( this, wxID_ADBUTTONWX, _("wxWidgets"), wxDefaultPosition, wxDefaultSize, 0 );
	ADSubSizer2->Add( ADButtonWX, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	ADButtonGCC = new wxButton( this, wxID_ADBUTTONGCC, _("GCC"), wxDefaultPosition, wxDefaultSize, 0 );
	ADSubSizer2->Add( ADButtonGCC, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	ADButtonMGW = new wxButton( this, wxID_ADBUTTONMGW, _("MinGW"), wxDefaultPosition, wxDefaultSize, 0 );
	ADSubSizer2->Add( ADButtonMGW, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	AboutDialogSizer->Add( ADSubSizer2, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	this->SetSizer( AboutDialogSizer );
	this->Layout();

	this->Centre( wxBOTH );
}

AboutDialog::~AboutDialog()
{
}
