///////////////////////////////////////////////////////////////////////////////
// Gemetry Class                                    //
///////////////////////////////////////////////////////////////////////////////
#include <string>
#include "../inc/Geom.h"
using namespace std;

/****** CPOINT *//////////////////////
CPoint::CPoint(float x,float y)
{
	set(x,y);
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



/******* CLINE ***********************/
CLine::CLine(float x1,float y1,float x2,float y2):
    point1(x1,x2),
    point2(x2,y2)
{}
CLine::CLine(CPoint p1,CPoint p2)
:point1(p1),point2(p2){}
void CLine::set(float x1,float y1,float x2,float y2)
{
    point1 = CPoint(x1,x2);
    point2 = CPoint(x2,y2);
}
string CLine::list()
{
    return "p1("+point1.list()+") p2("+point2.list()+")";
}



/******************** CRECTANGLE *//////////////////
CRectangle::CRectangle(float x,float y, float width,float height)
:Pos(x,y),
Size(width,height)
{
}
CRectangle::CRectangle(CPoint pos,CPoint width)
:Pos(pos),Size(width){}

void CRectangle::set(float x,float y,float width, float height)
{
    Pos = CPoint(x,y);
    Size = CPoint(width,height);

}

CCircle::CCircle(float x,float y,float size):
Center(x,y),
Size(size)
{

}
void CCircle::set(float x, float y,float size)
{
    Center = CPoint(x,y);
    Size = size;
}
string CCircle::list()
{
    return "center:"+Center.list()+ " Size: "+to_string(Size);
}
