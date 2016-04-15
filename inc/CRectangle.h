///////////////////////////////////////////////////////////////////////////////
// CPP-01 Geometry Interface                                //
///////////////////////////////////////////////////////////////////////////////
#ifndef CRECTANGLE_H
#define CRECTANGLE_H

#include <string>
#include "../inc/CPoint.h"
using namespace std;


class CRectangle
{
	private:
		CPoint Pos;
		CPoint Size;
		static int oCount;
	public:
        CRectangle(CPoint topleft,CPoint width);
		CRectangle(float x,float y, float width,float height);
		CRectangle (const CRectangle& cObj);
		~CRectangle();

		void set(float x,float y,float width, float height);
		string list();
		static int listCount();

};

#endif
