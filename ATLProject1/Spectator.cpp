// Spectator.cpp : Implementation of CSpectator

#include "stdafx.h"
#include "Spectator.h"


// CSpectator

void __stdcall CSpectator::IsDrawn()
{
	MessageBox(NULL, L"IsDrawn", L"Spectator", MB_OKCANCEL);
}

HRESULT STDMETHODCALLTYPE CSpectator::Connect(IUnknown *painter)
{
	HRESULT hr = DispEventAdvise(painter, &DIID__IPainterEvents);
	if(SUCCEEDED(hr))
	{
		return S_OK;
	}
	return hr;
}
        
HRESULT STDMETHODCALLTYPE CSpectator::Disconnect(IUnknown *painter)
{
	HRESULT hr = DispEventUnadvise(painter, &DIID__IPainterEvents);
	if(SUCCEEDED(hr))
	{
		return S_OK;
	}
	return hr;
}