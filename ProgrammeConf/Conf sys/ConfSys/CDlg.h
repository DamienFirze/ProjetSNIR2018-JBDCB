
// CDlg.h : fichier d'en-tête
//

#pragma once
#include "CSas.h"

#include <vector>
using namespace std;

// boîte de dialogue CDlg
class CDlg : public CDialog
{
// Construction
public:
	CDlg(CWnd* pParent = NULL);	// constructeur standard

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_APP_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Prise en charge de DDX/DDV

protected:
	HICON m_hIcon;

	// Fonctions générées de la table des messages
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

// Implémentation
private:
	CStatic*				m_pST_NB_PRT;
	CStatic*				m_pST_NUM_SAS;

	CEdit*					m_pED_NB_PRT;

	CComboBox*				m_pCMB_NUM_SAS;

	CButton*				m_pBT_NEW_SAS;
	CButton*				m_pBT_DEL_SAS;
	CButton*				m_pBT_SAVE_CONF;

	vector<CSas>*			m_pSas;
	vector<CSas>::iterator	m_itr;

	int						m_nNnSas;

public:
	afx_msg void OnBnClickedBtNewSas();
	afx_msg void OnBnClickedBtDelSas();
	afx_msg void OnBnClickedBtSaveConf();
};
