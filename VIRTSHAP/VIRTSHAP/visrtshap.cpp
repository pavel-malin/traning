#include<iostream>
#include "msoftcon.h"

using std::cout;
using std::cin;
using std::endl;

class shape
{
protected:
	int xCo, yCo;
	color fillcolor;
	fstyle fillstyle;
public:
	shape() : xCo(0), yCo(0), fillcolor(cWHITE),
		fillstyle(SOLID_FILL)
	{}
	shape(int x, int y, color fc, fstyle fs) :
		xCo(x), yCo(y), fillcolor(fc), fillstyle(fs)
	{}
	virtual void draw() = 0
	{
		set_color(fillcolor);
		set_fill_style(fillstyle);
	}
};

class ball : public shape
{
private:
	int radius;
public: 
	ball() : shape()
	{}
	ball(int x, int y, int r, color fc, fstyle fs) :
		shape(x, y, fc, fs), radius(r)
	{}
	void draw()
	{
		shape::draw();
		draw_circle(xCo, yCo, radius);
	}
};

class rect : public shape
{
private:
	int width, height;
public:
	rect() : shape(), height(0), width(0)
	{}
	rect(int x, int y, int h, int w, color fc, fstyle fs) :
		shape(x, y, fc, fs), height(h), width(w)
	{}
	void draw()
	{
		shape::draw();
		draw_rectangle(xCo, yCo, xCo + width, yCo + height);
		set_color(cWHITE);
		draw_line(xCo, yCo, xCo + width, yCo + height);
	}
};

class tria : public shape
{
private:
	int height;
public:
	tria() : shape(), height(0)
	{}
	tria(int x, int y, int h, color fc, fstyle fs) : shape(x, y, fc, fs), height(h)
	{}
	void draw()
	{
		shape::draw();
		draw_pyramid(xCo, yCo, height);
	}

};

int main()
{
	int j;
	init_graphics();
	shape* pShapes[3];

	pShapes[0] = new ball(40, 12, 5, cBLUE, X_FILL);
	pShapes[1] = new rect(12, 7, 10, 15, cRED, SOLID_FILL);
	pShapes[2] = new tria(60, 7, 11, cGREEN, MEDIUM_FILL);

	for (j = 0; j < 3; j++)
	{
		pShapes[j]->draw();
	}
	for (j = 0; j < 3; j++)
	{
		delete pShapes[j];
	}
	set_cursor_pos(1, 25);
	return 0;
}