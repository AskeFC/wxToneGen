/***************************************************************
 * Name:      NoteBook.cpp
 * Purpose:   Code for Graphical User Interface Frame NoteBook
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

#include "NoteBook.h"

NoteBook::NoteBook( wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style ) : wxAuiNotebook( parent, id, pos, size, style )
{
	NBPage_Welcome = new MNBPanel_Welcome( this, wxID_MNBPanel_Welcome, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Welcome") );
	this->AddPage( NBPage_Welcome, wxT("Welcome"), true );
	NBPage_Welcome->PageExists = true;

    NBPage_Conf_ToneGen = new MNBPanel_Conf_ToneGen( this, wxID_MNBPanel_Conf_ToneGen, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("ToneGen Config") );
    this->AddPage( NBPage_Conf_ToneGen, wxT("ToneGen Config"), false );
	NBPage_Conf_ToneGen->PageExists = true;

	NBPage_HTML_Page = new MNBPanel_HTML_Page( this, wxID_MNBPanel_HTML_Page, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("HTML Page") );
	this->AddPage( NBPage_HTML_Page, wxT("HTML Page"), false );
	NBPage_HTML_Page->PageExists = true;

	NBPage_HTML_Game = new MNBPanel_HTML_Game( this, wxID_MNBPanel_HTML_Game, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("HTML Game") );
	this->AddPage( NBPage_HTML_Game, wxT("HTML Game"), false );
	NBPage_HTML_Game->PageExists = true;

	NBPage_Sound_ToneGen = new MNBPanel_Sound_ToneGen( this, wxID_MNBPanel_Sound_ToneGen, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Tone Generator") );
	this->AddPage( NBPage_Sound_ToneGen, wxT("Tone Generator"), false );
	NBPage_Sound_ToneGen->PageExists = true;

    NBPage_Sound_Wave = new MNBPanel_Sound_Wave( this, wxID_MNBPanel_Sound_Wave, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Square Wave") );
    this->AddPage( NBPage_Sound_Wave, wxT("Square Wave"), false );
    NBPage_Sound_Wave->PageExists = true;
}

NoteBook::~NoteBook()
{
}

void NoteBook::CreatePage( int PageNum )
{
    switch( PageNum )
    {
        case 1:
            NBPage_Welcome = new MNBPanel_Welcome( this, wxID_MNBPanel_Welcome, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Welcome") );
            this->AddPage( NBPage_Welcome, wxT("Welcome"), true );
            NBPage_Welcome->PageExists = true;
            this->SetSelection( this->GetPageIndex( NBPage_Welcome ) );
        break;
        case 2:
            NBPage_Conf_ToneGen = new MNBPanel_Conf_ToneGen( this, wxID_MNBPanel_Conf_ToneGen, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("ToneGen Config") );
            this->AddPage( NBPage_Conf_ToneGen, wxT("ToneGen Config"), false );
            NBPage_Conf_ToneGen->PageExists = true;
            this->SetSelection( this->GetPageIndex( NBPage_Conf_ToneGen ) );
        break;
        case 3:
            NBPage_HTML_Page = new MNBPanel_HTML_Page( this, wxID_MNBPanel_HTML_Page, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("HTML Page") );
            this->AddPage( NBPage_HTML_Page, wxT("HTML Page"), false );
            NBPage_HTML_Page->PageExists = true;
            this->SetSelection( this->GetPageIndex( NBPage_HTML_Page ) );
        break;
        case 4:
            NBPage_HTML_Game = new MNBPanel_HTML_Game( this, wxID_MNBPanel_HTML_Game, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("HTML Game") );
            this->AddPage( NBPage_HTML_Game, wxT("HTML Game"), false );
            NBPage_HTML_Game->PageExists = true;
            this->SetSelection( this->GetPageIndex( NBPage_HTML_Game ) );
        break;
        case 5:
            NBPage_Sound_ToneGen = new MNBPanel_Sound_ToneGen( this, wxID_MNBPanel_Sound_ToneGen, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Tone Generator") );
            this->AddPage( NBPage_Sound_ToneGen, wxT("Tone Generator"), false );
            NBPage_Sound_ToneGen->PageExists = true;
            this->SetSelection( this->GetPageIndex( NBPage_Sound_ToneGen ) );
        break;
        case 6:
            NBPage_Sound_Wave = new MNBPanel_Sound_Wave( this, wxID_MNBPanel_Sound_Wave, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, wxT("Square Wave") );
            this->AddPage( NBPage_Sound_Wave, wxT("Square Wave"), false );
            NBPage_Sound_Wave->PageExists = true;
            this->SetSelection( this->GetPageIndex( NBPage_Sound_Wave ) );
        break;
        default:
        break;
    }
}

bool NoteBook::ExistPage( int NumPage )
{
    bool CallBacker = true; // try to avoid
    switch( NumPage )
    {
        case 1:
            CallBacker = NBPage_Welcome->PageExists;
        break;
        case 2:
            CallBacker = NBPage_Conf_ToneGen->PageExists;
        break;
        case 3:
            CallBacker = NBPage_HTML_Page->PageExists;
        break;
        case 4:
            CallBacker = NBPage_HTML_Game->PageExists;
        break;
        case 5:
            CallBacker = NBPage_Sound_ToneGen->PageExists;
        break;
        case 6:
            CallBacker = NBPage_Sound_Wave->PageExists;
        break;
        default:
        break;
    }
    return CallBacker;
}
