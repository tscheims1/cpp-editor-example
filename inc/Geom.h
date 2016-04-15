///////////////////////////////////////////////////////////////////////////////
// CPP-01 Geometry Interface                                //
///////////////////////////////////////////////////////////////////////////////
#include <string>
using namespace std;


class CPoint
{
	private:
		float X, Y;
	public:
        CPoint(float x,float y);
        void set(float x,float y);
        string list();

};
class CLine
{
	private:
		CPoint point1;
		CPoint point2;
	public:
        CLine(CPoint p1,CPoint p2);
        CLine(float x1,float y1,float x2,float y2);
        void set(float x1,float y1,float x2,float y2);
        string list();


};
class CRectangle
{
	private:
		CPoint Pos;
		CPoint Size;
	public:
        CRectangle(CPoint topleft,CPoint width);
		CRectangle(float x,float y, float width,float height);
		void set(float x,float y,float width, float height);
		string list();

};
class CCircle
{
	private:
		CPoint Center;
		float Size;
		CCircle(float x,float y,float size);
		CCircle(CPoint center,float size);
	public:
		 void set(float x, float y,float size);
		 string list();
};
