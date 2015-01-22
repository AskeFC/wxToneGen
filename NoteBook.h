/***************************************************************
 * Name:      NoteBook.h
 * Purpose:   Header for Graphical User Interface Frame NoteBook
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <wx/wxprec.h>
#include <wx/wx.h>
#include <wx/event.h>
#include <wx/aui/auibook.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/bitmap.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>

#include "NBPage_Welcome.h"
#include "NBPage_Conf_ToneGen.h"
#include "NBPage_HTML_Page.h"
#include "NBPage_HTML_Game.h"
#include "NBPage_Sound_ToneGen.h"
#include "NBPage_Sound_Wave.h"

#include "ID_Names.h"

//#define wxID_MAINNOTEBOOK 1300

class NoteBook : public wxAuiNotebook
{
    friend class GUIFrame;
    private:
        void CreatePage( int PageNum );

    protected:
		MNBPanel_Welcome*       NBPage_Welcome;
		MNBPanel_Conf_ToneGen*  NBPage_Conf_ToneGen;
		MNBPanel_HTML_Page*     NBPage_HTML_Page;
		MNBPanel_HTML_Game*     NBPage_HTML_Game;
		MNBPanel_Sound_ToneGen* NBPage_Sound_ToneGen;
		MNBPanel_Sound_Wave*    NBPage_Sound_Wave;

    public:
        bool ExistPage( int NumPage );
        NoteBook( wxWindow* parent, wxWindowID id, wxPoint pos, wxSize size, long style );
        ~NoteBook();
};

#endif // NOTEBOOK_H
