///////////////////////////////////////////////////////////////////////////////
// CPOINT                                                                    //
///////////////////////////////////////////////////////////////////////////////
#include "../inc/CPoint.h"
#include <string>

using namespace std;

CPoint::CPoint(float x,float y)
{
    oCount++;
	set(x,y);
}
CPoint::CPoint(const CPoint& cObj)
{
    oCount++;
    X = cObj.X;
    Y = cObj.Y;
}
CPoint::~CPoint()
{
    oCount--;
}
void CPoint::set(float x,float y)
{
	X =x;
    Y =y;
}
string CPoint::list()
{
    return "x: "+to_string(X)+" y: "+to_string(Y);
}
int CPoint::listCount(){return oCount;}
int CPoint::oCount =0;
