#include "Cal.h"

/*
void Point::Init(int x, int y)
{
	xpos = x;
	ypos = y;
}
*/

void Point::ShowPointInfo() const
{
	cout << " [ " << xpos << "," << ypos << " ] " << endl;
}


/*
void Circle::Init(int x, int y, int rad)
	{
		Center.Init(x, y);
		radius = rad;
	}
	*/

	void Circle::ShowPointInfoCircle() const
	{
		cout << "radius : " << radius << endl;
		Center.ShowPointInfo();
	}

/*
void Ring::Init(int Inx, int Iny, int Inrad, int Outx, int Outy, int Outrad)
	{
		Incir.Init(Inx, Iny, Inrad);
		Outcir.Init(Outx, Outy, Outrad);
	}
	*/

void Ring::ShowRingInfo()
	{
		cout << "Inner Circle Info..." << endl;
		Incir.ShowPointInfoCircle();

		cout << "Outter Circle Info..." << endl;
		Outcir.ShowPointInfoCircle();
	}

