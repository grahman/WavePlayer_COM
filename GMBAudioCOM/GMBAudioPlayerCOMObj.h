// GMBAudioPlayerCOMObj.h : Declaration of the CGMBAudioPlayerCOMObj

#pragma once
#include "resource.h"       // main symbols



#include "GMBAudioCOM_i.h"
#include "_IGMBAudioPlayerCOMObjEvents_CP.h"
#include "GMBBufferObj.h"
#include <string>
#include <process.h>



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CGMBAudioPlayerCOMObj

class ATL_NO_VTABLE CGMBAudioPlayerCOMObj :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CGMBAudioPlayerCOMObj, &CLSID_GMBAudioPlayerCOMObj>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CGMBAudioPlayerCOMObj>,
	public CProxy_IGMBAudioPlayerCOMObjEvents<CGMBAudioPlayerCOMObj>,
	public IDispatchImpl<IGMBAudioPlayerCOMObj, &IID_IGMBAudioPlayerCOMObj, &LIBID_GMBAudioCOMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CGMBAudioPlayerCOMObj()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_GMBAUDIOPLAYERCOMOBJ)


BEGIN_COM_MAP(CGMBAudioPlayerCOMObj)
	COM_INTERFACE_ENTRY(IGMBAudioPlayerCOMObj)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY_AGGREGATE(IID_IMarshal, m_pUnkMarshaler.p)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CGMBAudioPlayerCOMObj)
	CONNECTION_POINT_ENTRY(__uuidof(_IGMBAudioPlayerCOMObjEvents))
END_CONNECTION_POINT_MAP()
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()
	DECLARE_GET_CONTROLLING_UNKNOWN()

	HRESULT FinalConstruct()
	{
		return CoCreateFreeThreadedMarshaler(
			GetControllingUnknown(), &m_pUnkMarshaler.p);
	}

	void FinalRelease()
	{
		m_pUnkMarshaler.Release();
	}

	CComPtr<IUnknown> m_pUnkMarshaler;

public:




	HRESULT Construct(char _path)
		{
		return E_NOTIMPL;
		}
	STDMETHOD(Construct)(CHAR* _path);
	STDMETHOD(get_State)(LONG* pVal);
	STDMETHOD(put_State)(LONG newVal);

private:
	unsigned long WINAPI myThreadStub(void *ptr);

	GMBBufferObj * buf;
	GMBAudioRunLoopParams * thParams;
	GMBBufferObjRef * bufRef;
	HANDLE *ghMutex;
	DWORD threadID;
	std::string path;
	int state;

public:
	STDMETHOD(Init)(void);
	STDMETHOD(Run)(void);
	};

OBJECT_ENTRY_AUTO(__uuidof(GMBAudioPlayerCOMObj), CGMBAudioPlayerCOMObj)
