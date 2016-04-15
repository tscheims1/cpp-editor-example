///////////////////////////////////////////////////////////////////////////////
// Gemetry Class                                    //
///////////////////////////////////////////////////////////////////////////////
#include <string>
#include "../inc/CLine.h"
using namespace std;

CLine::CLine(float x1,float y1,float x2,float y2):
    point1(x1,x2),
    point2(x2,y2)
{
    oCount++;
}
CLine::CLine(CPoint p1,CPoint p2)
:point1(p1),point2(p2)
{
    oCount++;
}
CLine::CLine(const CLine& cObj) :
point1(cObj.point1),
point2(cObj.point2)
{
    oCount++;
}
CLine::~CLine()
{
    oCount--;
}

void CLine::set(float x1,float y1,float x2,float y2)
{
    point1 = CPoint(x1,x2);
    point2 = CPoint(x2,y2);
}
string CLine::list()
{
    return "p1("+point1.list()+") p2("+point2.list()+")";
}
int CLine::listCount(){return oCount;}
int CLine::oCount =0;
