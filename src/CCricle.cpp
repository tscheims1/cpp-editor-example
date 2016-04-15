///////////////////////////////////////////////////////////////////////////////
// Gemetry Class                                    //
///////////////////////////////////////////////////////////////////////////////
#include <string>
#include "../inc/CCircle.h"
using namespace std;


CCircle::CCircle(float x,float y,float size):
Center(x,y),
Size(size)
{
    oCount++;
}
CCircle::~CCircle()
{
    oCount--;
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
CCircle::CCircle (const CCircle& cObj):
    Center(cObj.Center),
    Size(cObj.Size)
{
    oCount++;
}
int CCircle::listCount()
{
    return oCount;
}
int CCircle::oCount =0;
