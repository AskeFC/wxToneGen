/***************************************************************
 * Name:      TreeControl.cpp
 * Purpose:   Code for Graphical User Interface Frame Tree Control
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

#include "TreeControl.h"

TreeControl::TreeControl( wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style, const wxValidator& validator, wxString name ) : wxTreeCtrl( parent, id, pos, size, style, validator, name )
{
    this->AddRoot(wxT("HiddenRoot"));
    wxTreeItemId Root = wxTreeItemId(this->GetRootItem());
    TCID_Welcome = this->AppendItem( Root, wxT("Welcome") );
    TCID_Config = this->AppendItem( Root, wxT("Configuration") );
    TCID_Config_Sound_ToneGen = this->AppendItem( TCID_Config, wxT("Tone Generator") );
    TCID_Html = this->AppendItem( Root, wxT("HTML") );
    TCID_Html_Page = this->AppendItem( TCID_Html, wxT("Page Test") );
    TCID_Html_Game = this->AppendItem( TCID_Html, wxT("Game Test") );
    TCID_Sound = this->AppendItem( Root, wxT("Sound") );
    TCID_Sound_ToneGen = this->AppendItem( TCID_Sound, wxT("Tone Generator") );
    TCID_Sound_Wave = this->AppendItem( TCID_Sound, wxT("Square Wave") );
	this->SetMinSize( wxSize( 250,410 ) );
}

TreeControl::~TreeControl()
{
}
