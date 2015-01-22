/***************************************************************
 * Name:      MenuBar.h
 * Purpose:   Header for Graphical User Interface Frame Menu Bar
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef MENUBAR_H
#define MENUBAR_H

#include <wx/wxprec.h>
#include <wx/wx.h>
#include <wx/event.h>
#include <wx/menu.h>
#include <wx/menuitem.h>
#include <wx/sizer.h>
#include <wx/window.h>

#include "AboutDialog.h"

#include "ID_Names.h"
/*
#define wxID_MAINMENUEXIT 1101
#define wxID_MAINMENUABOUT 1102
*/
class MenuBar : public wxMenuBar
{
    private:
		wxMenu* MainMenuFile;
		wxMenuItem* MainMenuFileQuit;
		wxMenu* MainMenuHelp;
		wxMenuItem* MainMenuHelpAbout;

    public:
        MenuBar( long style );
        ~MenuBar();
};

#endif // MENUBAR_H
