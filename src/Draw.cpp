///////////////////////////////////////////////////////////////////////////////
// CPP-0X: "A1"                                     //
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "../inc/Geom.h"
using namespace std;

int main()
{
    CPoint cpoint(12,12);
    CPoint cpoint2(cpoint);
    cpoint.set(11,11);
    cout << cpoint2.list() << endl;

    CLine  L1(10, 10, 20, 20);
    cout << CPoint::listCount() <<endl;
    CLine* pL2 = new CLine(CPoint(5,5), CPoint(55,55));
    cout << CPoint::listCount() <<endl;
    delete pL2;
    cout << CPoint::listCount() <<endl;

    CRectangle* rectangle = new CRectangle(CPoint(1,2),CPoint(1,2));
    cout << CPoint::listCount() << CRectangle::listCount() << endl;
}
