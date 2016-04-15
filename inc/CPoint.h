///////////////////////////////////////////////////////////////////////////////
// CPP-01 Geometry Interface                                //
///////////////////////////////////////////////////////////////////////////////

#ifndef CPOINT_H
#define CPOINT_H
#include <string>
using namespace std;


class CPoint
{
	private:
		float X, Y;
		static int oCount;
	public:
        static int test;
        CPoint(float x,float y);
        CPoint (const CPoint& cObj);
        ~CPoint();

        void set(float x,float y);
        string list();
        static int listCount();
};
#endif
