/***************************************************************
 * Name:      CBwxHtml5App.h
 * Purpose:   Header for Application Class
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifndef CBWXHTML5APP_H
#define CBWXHTML5APP_H

#include <wx/wxprec.h>
#include <wx/wx.h>
#include <wx/app.h>
#include <wx/frame.h>
#include <wx/icon.h>

#include <wx/dir.h>
#include <wx/stdpaths.h>
#include <wx/filename.h>
#include <wx/textfile.h>
#include <wx/printdlg.h>
#include <wx/artprov.h>
#include <wx/aui/aui.h>
//#include <webconnect/webcontrol.h>
//#include <webconnect/webcontrol.cpp>

#include "ID_Names.h"

class CBwxHtml5App : public wxApp
{
    public:
        virtual bool OnInit();
//        wxString FindXulRunner(const wxString& xulrunner_dirname);
};

DECLARE_APP(CBwxHtml5App)

#endif // CBWXHTML5APP_H
