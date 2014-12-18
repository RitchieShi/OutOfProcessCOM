// SampleObj.h : Declaration of the CSampleObj

#ifndef __SAMPLEOBJ_H_
#define __SAMPLEOBJ_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSampleObj
class ATL_NO_VTABLE CSampleObj : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSampleObj, &CLSID_SampleObj>,
	public IDispatchImpl<ISampleObj, &IID_ISampleObj, &LIBID_OUTPROCCOMLib>
{
public:
	CSampleObj()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SAMPLEOBJ)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CSampleObj)
	COM_INTERFACE_ENTRY(ISampleObj)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// ISampleObj
public:
	STDMETHOD(get_get_add)(/*[in]*/ int a, /*[in]*/ int b, /*[out, retval]*/ long *pVal);
	STDMETHOD(put_get_add)(/*[in]*/ int a, /*[in]*/ int b, /*[in]*/ long newVal);
};

#endif //__SAMPLEOBJ_H_
