
// WKPlayerBeta.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CWKPlayerBetaApp: 
// �йش����ʵ�֣������ WKPlayerBeta.cpp
//

class CWKPlayerBetaApp : public CWinApp
{
public:
	CWKPlayerBetaApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CWKPlayerBetaApp theApp;