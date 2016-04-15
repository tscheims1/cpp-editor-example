///////////////////////////////////////////////////////////////////////////////
// CPP-01 Geometry Interface                                //
///////////////////////////////////////////////////////////////////////////////
#ifndef CCIRCLE_H
#define CCIRCLE_H

#include <string>
using namespace std;


#include "../inc/CPoint.h"

class CCircle
{
	private:
		CPoint Center;
		float Size;
		CCircle(float x,float y,float size);
		CCircle(CPoint center,float size);
		CCircle (const CCircle& cObj);
		~CCircle();
		static int oCount;
	public:
		 void set(float x, float y,float size);
		 string list();
		 static int listCount();
};
#endif
