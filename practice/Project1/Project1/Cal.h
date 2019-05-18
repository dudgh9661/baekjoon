#include <iostream>
#include <cstring>
using namespace std;

class Point
{
private :
	int xpos, ypos;
public :
	Point(int x, int y):xpos(x), ypos(y) 
	{
	}
	//void Init(int x, int y);
	void ShowPointInfo() const;
};

class Circle
{
private : 
	Point Center;
	int radius;
public :
	Circle(int x, int y, int rad): Center(x,y)
	{
		radius = rad;
	}
	//void Init(int x, int y, int rad);
	void ShowPointInfoCircle() const;
};

class Ring
{
private : 
	Circle Incir;
	Circle Outcir;
public :
	Ring(int Inx, int Iny, int Inrad, int Outx, int Outy, int Outrad):Incir(Inx, Iny, Inrad), Outcir(Outx, Outy, Outrad)
	{
		//Circle Incir(Inx, Iny, Inrad);
		//Circle (Inx, Iny, Inrad
	}
	//void Init(int lnx, int lny, int lnrad, int Outx, int Outy, int Outrad);
	void ShowRingInfo();
};