///////////////////////////////////////////////////////////////////////////////
// Gemetry Class                                    //
///////////////////////////////////////////////////////////////////////////////

#include <string>
#include "../inc/CRectangle.h"
using namespace std;

CRectangle::CRectangle(float x,float y, float width,float height)
:Pos(x,y),
Size(width,height)
{
    oCount++;
}
CRectangle::CRectangle(CPoint pos,CPoint width)
:Pos(pos),Size(width)
{

    oCount++;
}
CRectangle::~CRectangle()
{
    oCount--;
}

void CRectangle::set(float x,float y,float width, float height)
{
    Pos = CPoint(x,y);
    Size = CPoint(width,height);

}
int CRectangle::listCount(){return oCount;}
int CRectangle::oCount =0;
