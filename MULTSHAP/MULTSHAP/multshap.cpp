#include "msoftcon.h"

class Shape
{
protected:
	int xCo, yCo;
	color fillcolor;
	fstyle fillstyle;
public:
	Shape() : xCo(0), yCo(0), fillcolor(cWHITE), fillstyle(SOLID_FILL)
	{}
	Shape(int x, int y, color fc, fstyle fs) : xCo(x), yCo(y), fillcolor(fc), fillstyle(fs)
	{}
	void draw() const
	{
		set_color(fillcolor);
		set_fill_style(fillstyle);
	}
};

class Circle : public Shape
{
private:
	int radius;
public:
	Circle() : Shape()
	{}
	Circle(int x, int y, int r, color fc, fstyle fs) : Shape(x, y, fc, fs), radius(r)
	{}
	void draw() const
	{
		Shape::draw();
		draw_circle(xCo, yCo, radius);
	}
};

class Rect : public Shape
{
private:
	int width, height;
public:
	Rect() : Shape(), height(0), width(0)
	{}
	Rect(int x, int y, int h, int w, color fc, fstyle fs) : Shape(x, y, fc, fs), height(h), width(w)
	{}
	void draw() const
	{
		Shape::draw();
		draw_rectangle(xCo, yCo, xCo + width, yCo + height);
	}
};

class Tria : public Shape
{
private:
	int height;
public:
	Tria() : Shape(), height(0)
	{}
	Tria(int x, int y, int h, color fc, fstyle fs) : Shape(x, y, fc, fs), height(h)
	{}
	void draw() const
	{
		Shape::draw();
		draw_pyramid(xCo, yCo, height);
	}
};

int main()
{
	init_graphics();
	Circle cir(40, 12, 5, cBLUE, X_FILL);
	Rect rec(12, 7, 10, 15, cRED, SOLID_FILL);
	Tria tri(60, 7, 11, cGREEN, MEDIUM_FILL);

	cir.draw();
	rec.draw();
	tri.draw();

	set_cursor_pos(1, 25);
	return 0;
}