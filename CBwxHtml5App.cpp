/***************************************************************
 * Name:      CBwxHtml5App.cpp
 * Purpose:   Code for Application Class
 * Author:    Mandrake (askefc@gmail.com)
 * Created:   2010-09-13
 * Copyright: Mandrake ()
 * License:
 **************************************************************/
#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif  // WX_PRECOMP

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "CBwxHtml5App.h"
#include "CBwxHtml5Main.h"

IMPLEMENT_APP(CBwxHtml5App);
// SetAppName
// SetVendorName
// argc & argv
// CreateTraits
// CreateLogTarget

bool CBwxHtml5App::OnInit()
{
    /* Locate the XULRunner engine; the following call will look for a directory named "xr" */
//    wxString xulrunner_path = FindXulRunner(wxT("xr"));
//    if (xulrunner_path.IsEmpty())  //  use builtin wxhtmlwindow instead and report it to user
//    {
//        wxMessageBox(wxT("Could not find xulrunner directory"));
//        return false;
//    }

    /* Locate some common paths and initialize the control with the plugin paths; add these common plugin directories to MOZ_PLUGIN_PATH */
//    wxString program_files_dir; // for windows only, what to use for mac & linux ?
//    ::wxGetEnv(wxT("ProgramFiles"), &program_files_dir);
//    if (program_files_dir.Length() == 0 || program_files_dir.Last() != '\\'){ program_files_dir += wxT("\\"); }
//    wxString dir = program_files_dir;
//    dir += wxT("Mozilla Firefox\\plugins");
//    wxWebControl::AddPluginPath(dir);

    /* to install the flash plugin automatically if it exists, add a path to the flash location; f.ex., on windows, the system directory is given by system_dir, then, we have: */
    // wxString dir2 = system_dir;
    // dir2 += wxT("Macromed\\Flash");
    // wxWebControl::AddPluginPath(dir2);

    /* Finally, initialize the engine; Calling wxWebControl::InitEngine() is very important and has to be made before using wxWebControl. It instructs wxWebConnect where the xulrunner directory is. */
//    wxWebControl::InitEngine(xulrunner_path);

    CBwxHtml5Frame* MainFrameBase = new CBwxHtml5Frame(0L);
    MainFrameBase->SetIcon(wxICON(aaaa)); // Set App Icon, refers to resource.rc
    MainFrameBase->Show();

    return true;
}

//wxString CBwxHtml5App::FindXulRunner(const wxString& xulrunner_dirname)
//{
    /* get the location of this executable */
 //   wxString exe_path = wxStandardPaths::Get().GetExecutablePath();
 //   wxString path_separator = wxFileName::GetPathSeparator();
 //   exe_path = exe_path.BeforeLast(path_separator[0]);
 //   exe_path += path_separator;

//    wxString path;

    /* first, check <exe_path>/<xulrunner_path> */
//    path = exe_path + xulrunner_dirname;
//    if (wxDir::Exists(path)){ return path; }

    /* next, check <exe_path>/../<xulrunner_path> */
//    path = exe_path + wxT("..") + path_separator + xulrunner_dirname;
//    if (wxDir::Exists(path)){ return path; }

    /* finally, check <exe_path>/../../<xulrunner_path> */
//    path = exe_path + wxT("..") + path_separator + wxT("..") + path_separator + xulrunner_dirname;
//    if (wxDir::Exists(path)){ return path; }

//    return wxEmptyString;
//}
