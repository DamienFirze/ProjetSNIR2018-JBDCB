
// ConfSys.h : fichier d'en-tête principal pour l'application PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"		// symboles principaux


// CConfSys :
// Consultez ConfSys.cpp pour l'implémentation de cette classe
//

class CConfSys : public CWinApp
{
public:
	CConfSys();

// Substitutions
public:
	virtual BOOL InitInstance();

// Implémentation

	DECLARE_MESSAGE_MAP()
};

extern CConfSys theApp;