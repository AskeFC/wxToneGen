/***************************************************************
 * Name:      NBPage_Welcome.cpp
 * Purpose:   Code For Graphical User Interface Frame Note Book Page Welcome
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

#include "NBPage_Welcome.h"

MNBPanel_Welcome::MNBPanel_Welcome( wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style, wxString name ) : wxPanel( parent, id, pos, size, style, name )
{
	MNBPSizer = new wxBoxSizer( wxEXPAND|wxVERTICAL|wxHORIZONTAL );
	MNBPHtmlWin = new wxHtmlWindow( this, wxID_MNBPanel_Welcome_HTMLWIN, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO ); //wxSize( 322,376 )
	MNBPSizer->Add( MNBPHtmlWin, 1, wxALL|wxEXPAND , 5 );
	this->SetSizer( MNBPSizer );
	this->Layout();
	MNBPSizer->Fit( this );
}

MNBPanel_Welcome::~MNBPanel_Welcome()
{
    PageExists = false;
}
