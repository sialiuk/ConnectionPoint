// Painter.cpp : Implementation of CPainter

#include "stdafx.h"
#include "Painter.h"


// CPainter



STDMETHODIMP CPainter::Draw(BSTR figure)
{
	MessageBox(NULL, figure, L"Draw", MB_OKCANCEL);
	Fire_OnDraw();
	return S_OK;
}
