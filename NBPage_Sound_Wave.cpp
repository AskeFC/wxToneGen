/***************************************************************
 * Name:      NBPage_Sound_Wave.cpp
 * Purpose:   Code for Graphical User Interface Frame Note Book Square Wave Page
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

#include "NBPage_Sound_Wave.h"

MNBPanel_Sound_Wave::MNBPanel_Sound_Wave( wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style, wxString name ) : wxPanel( parent, id, pos, size, style, name )
{
	MNBPSizer = new wxBoxSizer( wxEXPAND|wxVERTICAL|wxHORIZONTAL );
	MNBPHtmlWin = new wxHtmlWindow( this, wxID_MNBPanel_Sound_Wave_HTMLWIN, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO ); //wxSize( 322,376 )
	MNBPSizer->Add( MNBPHtmlWin, 1, wxALL|wxEXPAND , 5 );
	this->SetSizer( MNBPSizer );
	this->Layout();
	MNBPSizer->Fit( this );
}

MNBPanel_Sound_Wave::~MNBPanel_Sound_Wave()
{
    PageExists = false;
}
