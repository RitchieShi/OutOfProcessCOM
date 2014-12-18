// SampleObj.cpp : Implementation of CSampleObj
#include "stdafx.h"
#include "OutProcCom.h"
#include "SampleObj.h"

#pragma comment(lib, "../TestCtrlFP/Debug/tstDll.lib")
extern "C" 
{
	__declspec(dllimport) int Add(int a, int b);
}
/////////////////////////////////////////////////////////////////////////////
// CSampleObj

STDMETHODIMP CSampleObj::get_get_add(int a, int b, long *pVal)
{
	// TODO: Add your implementation code here
	*pVal = Add(a, b);
	return S_OK;
}

STDMETHODIMP CSampleObj::put_get_add(int a, int b, long newVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}
