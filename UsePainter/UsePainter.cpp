// UsePainter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "..\ATLProject1\ATLProject1_i.h"
#include "..\ATLProject1\ATLProject1_i.c"


using namespace ATL;
int _tmain(int argc, _TCHAR* argv[])
{
	CoInitialize(NULL);
	HRESULT hr = S_OK;
	{
		CComPtr<IPainter> painter;
		CComPtr<ISpectator> spectator1, spectator2, spectator3;
		hr = painter.CoCreateInstance(CLSID_Painter);
		if(SUCCEEDED(hr))
		{
			hr = spectator1.CoCreateInstance(CLSID_Spectator);
			hr = spectator2.CoCreateInstance(CLSID_Spectator);
			hr = spectator3.CoCreateInstance(CLSID_Spectator);
		}

		if(SUCCEEDED(hr))
		{
			hr = spectator1->Connect(painter.p);
			hr = spectator2->Connect(painter.p);
			hr = spectator3->Connect(painter.p);

			if(SUCCEEDED(hr))
			{
				painter->Draw(L"Circle");
				hr = spectator1->Disconnect(painter.p);
			}

			painter->Draw(L"Square");
			hr = spectator2->Disconnect(painter.p);

			painter->Draw(L"Man");
			hr = spectator3->Disconnect(painter.p);
		}
	}

	CoUninitialize();
	return 0;
}

