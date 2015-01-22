/***************************************************************
 * Name:      MenuBar.cpp
 * Purpose:   Code for Graphical User Interface Frame Menu Bar
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

#include "MenuBar.h"

MenuBar::MenuBar( long style ) : wxMenuBar( style )
{
    MainMenuFile = new wxMenu();
    this->Append( MainMenuFile, wxT("&File") );
    MainMenuFileQuit = new wxMenuItem( MainMenuFile, wxID_MAINMENUEXIT, wxString( wxT("&Quit") ) + wxT('\t') + wxT("Alt+F4"), wxT("Quit the application"), wxITEM_NORMAL );
    MainMenuFile->Append( MainMenuFileQuit );
    MainMenuHelp = new wxMenu();
    this->Append( MainMenuHelp, wxT("&Help") );
    MainMenuHelpAbout = new wxMenuItem( MainMenuHelp, wxID_MAINMENUABOUT, wxString( wxT("&About") ) + wxT('\t') + wxT("F1"), wxT("Show info about this application"), wxITEM_NORMAL );
    MainMenuHelp->Append( MainMenuHelpAbout );
}

MenuBar::~MenuBar()
{
}
