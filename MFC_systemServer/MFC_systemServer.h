
// MFC_systemServer.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CMFC_systemServerApp: 
// �аѾ\��@�����O�� MFC_systemServer.cpp
//

class CMFC_systemServerApp : public CWinApp
{
public:
	CMFC_systemServerApp();

// �мg
public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CMFC_systemServerApp theApp;