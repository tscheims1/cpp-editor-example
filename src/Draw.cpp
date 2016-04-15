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
    cout << cpoint2.list()<<endl;

}
