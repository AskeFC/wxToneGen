/***************************************************************
 * Name:      NBPage_Conf_ToneGen.cpp
 * Purpose:   Code for Tone Generator Configuration Note Book Page
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

#include "NBPage_Conf_ToneGen.h"

MNBPanel_Conf_ToneGen::MNBPanel_Conf_ToneGen( wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style, wxString name ) : wxPanel( parent, id, pos, size, style, name )
{
	MNBPSizer = new wxBoxSizer( wxEXPAND|wxVERTICAL|wxHORIZONTAL );
	MNBPHtmlWin = new wxHtmlWindow( this, wxID_MNBPanel_Conf_ToneGen_HTMLWIN, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO ); //wxSize( 322,376 )
	MNBPSizer->Add( MNBPHtmlWin, 1, wxALL|wxEXPAND , 5 );
	this->SetSizer( MNBPSizer );
	this->Layout();
	MNBPSizer->Fit( this );
}

MNBPanel_Conf_ToneGen::~MNBPanel_Conf_ToneGen()
{
    PageExists = false;
}
