// GMBAudioPlayerCOMObj.cpp : Implementation of CGMBAudioPlayerCOMObj

#include "stdafx.h"
#include "GMBAudioPlayerCOMObj.h"
#include "GMBUtil.h"
#include "GMBAudioUUID.h"
#include "GMBBufferObj.h"


// CGMBAudioPlayerCOMObj

STDMETHODIMP CGMBAudioPlayerCOMObj::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IGMBAudioPlayerCOMObj
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CGMBAudioPlayerCOMObj::Construct(CHAR* _path)
	{
	// TODO: Add your implementation code here



	return S_OK;
	}


STDMETHODIMP CGMBAudioPlayerCOMObj::get_State(LONG* pVal)
	{
	// TODO: Add your implementation code here

	return S_OK;
	}


STDMETHODIMP CGMBAudioPlayerCOMObj::put_State(LONG newVal)
	{
	// TODO: Add your implementation code here

	return S_OK;
	}


STDMETHODIMP CGMBAudioPlayerCOMObj::Init(void)
	{
	// TODO: Add your implementation code here
	thParams = new GMBAudioRunLoopParams();
	bufRef = new GMBBufferObjRef();
	ghMutex = new HANDLE();
	thParams->volL = 1;
	thParams->volR = 1;
	path = "C:\\Users\\Graham\\Documents\\Visual Studio 2012\\Projects\\ConsoleApplication4\\Debug\\Content\\ott.wav";
	buf = new GMBBufferObj(bufRef, ghMutex);
	return S_OK;
	}


/*****************Private Member Functions**************/
unsigned long CGMBAudioPlayerCOMObj::myThreadStub(void *ptr)
{
	if (!ptr) return -1;

	thParams->flags = kShouldPlay;
    return ((GMBBufferObj*)ptr)->run((LPVOID)&thParams);
}
/****************End Private Member Functions**************/

STDMETHODIMP CGMBAudioPlayerCOMObj::Run(void)
	{
	// TODO: Add your implementation code here

	buf->run((LPVOID)&thParams);
	return S_OK;
	}

