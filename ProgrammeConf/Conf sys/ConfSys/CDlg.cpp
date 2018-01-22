
// CDlg.cpp : fichier d'impl�mentation
//

#include "stdafx.h"
#include "CApp.h"
#include "CDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// bo�te de dialogue CDlg



CDlg::CDlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_APP_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BT_NEW_SAS, &CDlg::OnBnClickedBtNewSas)
	ON_BN_CLICKED(IDC_BT_DEL_SAS, &CDlg::OnBnClickedBtDelSas)
	ON_BN_CLICKED(IDC_BT_SAVE_CONF, &CDlg::OnBnClickedBtSaveConf)
END_MESSAGE_MAP()


// gestionnaires de messages pour CDlg

BOOL CDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// D�finir l'ic�ne de cette bo�te de dialogue.  L'infrastructure effectue cela automatiquement
	//  lorsque la fen�tre principale de l'application n'est pas une bo�te de dialogue
	SetIcon(m_hIcon, TRUE);			// D�finir une grande ic�ne
	SetIcon(m_hIcon, FALSE);		// D�finir une petite ic�ne

	// TODO: ajoutez ici une initialisation suppl�mentaire
	/*m_pST_NB_PRT = (CStatic*)GetDlgItem(IDC_ST_NB_PRT);
	m_pST_NUM_SAS = (CStatic*)GetDlgItem(IDC_ST_NUM_SAS);*/

	m_pED_NB_PRT = (CEdit*)GetDlgItem(IDC_ED_NB_PRT);

	m_pCMB_NUM_SAS = (CComboBox*)GetDlgItem(IDC_CMB_NUM_SAS);

	m_pBT_NEW_SAS = (CButton*)GetDlgItem(IDC_BT_NEW_SAS);
	m_pBT_DEL_SAS = (CButton*)GetDlgItem(IDC_BT_DEL_SAS);
	m_pBT_SAVE_CONF = (CButton*)GetDlgItem(IDC_BT_SAVE_CONF);

	m_pSas = new vector<CSas>;
	m_itr = m_pSas->begin();

	m_pBT_DEL_SAS->EnableWindow(FALSE);

	return TRUE;  // retourne TRUE, sauf si vous avez d�fini le focus sur un contr�le
}

void CDlg::OnCancel()
{
	// TODO: ajoutez ici une initialisation suppl�mentaire
	delete m_pSas; m_pSas = nullptr;
	m_itr._Ptr = nullptr;

	CDialog::OnCancel();
}

// Si vous ajoutez un bouton R�duire � votre bo�te de dialogue, vous devez utiliser le code ci-dessous
//  pour dessiner l'ic�ne.  Pour les applications MFC utilisant le mod�le Document/Vue,
//  cela est fait automatiquement par l'infrastructure.

void CDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // contexte de p�riph�rique pour la peinture

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Centrer l'ic�ne dans le rectangle client
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Dessiner l'ic�ne
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// Le syst�me appelle cette fonction pour obtenir le curseur � afficher lorsque l'utilisateur fait glisser
//  la fen�tre r�duite.
HCURSOR CDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CDlg::OnBnClickedBtNewSas()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
}


void CDlg::OnBnClickedBtDelSas()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
}


void CDlg::OnBnClickedBtSaveConf()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contr�le
}
