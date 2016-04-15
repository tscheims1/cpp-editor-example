///////////////////////////////////////////////////////////////////////////////
// CPP-01 Geometry Interface                                //
///////////////////////////////////////////////////////////////////////////////

#ifndef CLINE_H
#define CLINE_H

#include <string>
#include "../inc/CPoint.h"
using namespace std;


class CLine
{
	private:
		CPoint point1;
		CPoint point2;
		static int oCount;
	public:
        CLine(CPoint p1,CPoint p2);
        CLine(float x1,float y1,float x2,float y2);
        CLine (const CLine& cObj);
        ~CLine();
        void set(float x1,float y1,float x2,float y2);
        string list();
        static int listCount();


};
#endif
