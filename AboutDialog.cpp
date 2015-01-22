/***************************************************************
 * Name:      AboutDialog.cpp
 * Purpose:   Code for About Dialog Box
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-14
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif  // WX_PRECOMP

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "AboutDialog.h"

AboutDialog::AboutDialog( wxWindow* parent, wxWindowID id, wxString title, wxPoint pos, wxSize size, int style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );

	AboutDialogSizer = new wxFlexGridSizer( 0, 2, 0, 0 );
	AboutDialogSizer->AddGrowableCol( 0, 1 );
	AboutDialogSizer->AddGrowableRow( 0, 1 );
	AboutDialogSizer->SetFlexibleDirection( wxBOTH );
	AboutDialogSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );

	ADStaticBox = new wxStaticBox( this, wxID_ADSTATICBOX, wxT("Development Tools && Thank Yous"), wxDefaultPosition, wxSize( 300, 200 ),  wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER|wxALIGN_CENTRE|wxALIGN_CENTRE_HORIZONTAL);
	ADStaticText = new wxStaticText( ADStaticBox, wxID_ADSTATICTEXT, wxT("testing\nnewline test\ttab test\n\\ backslash __ underscore\n\r return"), wxPoint( 30, 25 ), wxDefaultSize, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTRE|wxST_NO_AUTORESIZE );
    // wxGetOsDescription());
    // wxGetFullHostName());

	AboutDialogSizer->Add( ADStaticBox, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );

	ADSubSizer = new wxGridSizer( 6, 1, 0, 0 );
	ADButtonCB = new wxButton( this, wxID_ADBUTTONCB, wxT("Codeblocks"), wxDefaultPosition, wxDefaultSize, 0 );
	ADButtonFB = new wxButton( this, wxID_ADBUTTONFB, wxT("wxFormBuilder"), wxDefaultPosition, wxDefaultSize, 0 );
	ADButtonWX = new wxButton( this, wxID_ADBUTTONWX, wxT("wxWidgets"), wxDefaultPosition, wxDefaultSize, 0 );
	ADButtonGCC = new wxButton( this, wxID_ADBUTTONGCC, wxT("GCC"), wxDefaultPosition, wxDefaultSize, 0 );
	ADButtonMGW = new wxButton( this, wxID_ADBUTTONMGW, wxT("MinGW"), wxDefaultPosition, wxDefaultSize, 0 );
	ADButtonSTK = new wxButton( this, wxID_ADBUTTONSTK, wxT("STK"), wxDefaultPosition, wxDefaultSize, 0 );
	ADSubSizer->Add( ADButtonCB, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	ADSubSizer->Add( ADButtonFB, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	ADSubSizer->Add( ADButtonWX, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	ADSubSizer->Add( ADButtonGCC, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	ADSubSizer->Add( ADButtonMGW, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	ADSubSizer->Add( ADButtonSTK, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	AboutDialogSizer->Add( ADSubSizer, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );

	this->SetSizer( AboutDialogSizer );
	this->Layout();
	this->Centre( wxBOTH );

    this->Connect( wxID_ADBUTTONCB, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::OnButCBAct ));
    this->Connect( wxID_ADBUTTONFB, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::OnButFBAct ));
    this->Connect( wxID_ADBUTTONWX, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::OnButWXAct ));
    this->Connect( wxID_ADBUTTONGCC, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::OnButGCCAct ));
    this->Connect( wxID_ADBUTTONMGW, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::OnButMGWAct ));
    this->Connect( wxID_ADBUTTONSTK, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::OnButSTKAct ));
}

AboutDialog::~AboutDialog()
{
    this->Disconnect( wxID_ADBUTTONCB, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::OnButCBAct ));
    this->Disconnect( wxID_ADBUTTONFB, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::OnButFBAct ));
    this->Disconnect( wxID_ADBUTTONWX, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::OnButWXAct ));
    this->Disconnect( wxID_ADBUTTONGCC, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::OnButGCCAct ));
    this->Disconnect( wxID_ADBUTTONMGW, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::OnButMGWAct ));
    this->Disconnect( wxID_ADBUTTONSTK, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialog::OnButSTKAct ));
}

void AboutDialog::OnButCBAct( wxCommandEvent& )
{
    // use event or remove it
    wxLaunchDefaultBrowser( wxT("http://www.codeblocks.org"), wxBROWSER_NEW_WINDOW );
}

void AboutDialog::OnButFBAct( wxCommandEvent& )
{
    // use event or remove it
    wxLaunchDefaultBrowser( wxT("http://wxformbuilder.org"), wxBROWSER_NEW_WINDOW );
}

void AboutDialog::OnButWXAct( wxCommandEvent& )
{
    // use event or remove it
    wxLaunchDefaultBrowser( wxT("http://wxwidgets.org"), wxBROWSER_NEW_WINDOW );
}

void AboutDialog::OnButGCCAct( wxCommandEvent& )
{
    // use event or remove it
    wxLaunchDefaultBrowser( wxT("http://gcc.gnu.org"), wxBROWSER_NEW_WINDOW );
}

void AboutDialog::OnButMGWAct( wxCommandEvent& )
{
    // use event or remove it
    wxLaunchDefaultBrowser( wxT("http://www.mingw.org"), wxBROWSER_NEW_WINDOW );
}

void AboutDialog::OnButSTKAct( wxCommandEvent& )
{
    // use event or remove it
    wxLaunchDefaultBrowser( wxT("https://ccrma.stanford.edu/software/stk/"), wxBROWSER_NEW_WINDOW );
}
