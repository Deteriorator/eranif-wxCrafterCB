//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: UI.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef UI_BASE_CLASSES_H
#define UI_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/pen.h>
#include <wx/aui/auibar.h>
#include <map>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/treectrl.h>
#include <wx/imaglist.h>
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/filepicker.h>
#include <wx/button.h>
#include <wx/wizard.h>
#include <vector>
#include <wx/statbox.h>
#include <wx/textctrl.h>

class wxCrafterTabBase : public wxPanel
{
protected:
    enum {
        ID_TOOL_NEW_PROJECT = 1001,
        ID_TOOL_NEW_RESOURCE = 1002,
    };
protected:
    wxAuiToolBar* m_auibar;
    wxTreeCtrl* m_treeCtrl;

protected:
    virtual void OnNewCBProject(wxCommandEvent& event) { event.Skip(); }
    virtual void OnNewWxCrafterFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnNewWxCrafterFileUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnItemActivated(wxTreeEvent& event) { event.Skip(); }
    virtual void OnItemMenu(wxTreeEvent& event) { event.Skip(); }

public:
    wxCrafterTabBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL);
    virtual ~wxCrafterTabBase();
};


class wxcImages : public wxImageList
{
protected:
    // Maintain a map of all bitmaps representd by their name
    std::map<wxString, wxBitmap> m_bitmaps;


protected:

public:
    wxcImages();
    const wxBitmap& Bitmap(const wxString &name) const {
        if ( !m_bitmaps.count(name) )
            return wxNullBitmap;
        return m_bitmaps.find(name)->second;
    }
    virtual ~wxcImages();
};


class NewWxCrafterFileDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText48;
    wxChoice* m_choiceProjects;
    wxStaticText* m_staticText52;
    wxFilePickerCtrl* m_filePicker;
    wxStdDialogButtonSizer* m_stdBtnSizer38;
    wxButton* m_buttonOK;
    wxButton* m_button42;

protected:
    virtual void OnProjectSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    NewWxCrafterFileDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New wxCrafter Resource"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~NewWxCrafterFileDlgBase();
};


class NewCodeBlocksProjectWizardBase : public wxWizard
{
protected:
    std::vector<wxWizardPageSimple*> m_pages;

    wxWizardPageSimple* m_wizardPage82;
    wxStaticText* m_staticText98;
    wxStaticText* m_staticText112;
    wxStaticText* m_staticText106;
    wxTextCtrl* m_textCtrlProjectName;
    wxStaticText* m_staticText102;
    wxDirPickerCtrl* m_dirPickerProjectFolder;
    wxStaticText* m_staticTextProjectPathPreview;
    wxWizardPageSimple* m_wizardPage78;
    wxStaticText* m_staticText92;
    wxStaticText* m_staticText114;
    wxStaticText* m_staticText116;
    wxDirPickerCtrl* m_dirPickerWxPath;
    wxStaticText* m_staticText120;
    wxChoice* m_choiceBuildType;
    wxStaticText* m_staticText124;
    wxTextCtrl* m_textCtrlComponents;

protected:
    virtual void OnPageChanging(wxWizardEvent& event) { event.Skip(); }
    virtual void OnProjectNameUpdated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnProjectFolderPathChanged(wxFileDirPickerEvent& event) { event.Skip(); }
    virtual void OnEnableIfMSW(wxUpdateUIEvent& event) { event.Skip(); }

public:
    NewCodeBlocksProjectWizardBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New Code::Blocks + wxCrafter Project"), const wxBitmap& bmp = wxNullBitmap, const wxPoint& pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE);
    wxWizardPageSimple* GetFirstPage() const { if(!m_pages.empty()) return m_pages.at(0); return NULL; }
    virtual ~NewCodeBlocksProjectWizardBase();
};

#endif
