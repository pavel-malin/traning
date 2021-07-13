#include "msoftcon.h"

class circle
{
protected:
	int xCo, yCo;
	int raduis;
	color fillcolor;
	fstyle fillstyle;
public:
	circle(int x, int y, int r, color fc, fstyle fs):
		xCo(x), yCo(y), raduis(r), fillcolor(fc), fillstyle(fs)
	{ }
	void draw()
	{
		set_color(fillcolor);
		set_fill_style(fillstyle);
		draw_circle(xCo, yCo, raduis);
	}
	
};

int main()
{
	init_graphics();
	circle c1(15, 7, 5, cBLUE, X_FILL);
	circle c2(41, 12, 7, cRED, O_FILL);
	circle c3(65, 18, 4, cGREEN, MEDIUM_FILL);
	c1.draw();
	c2.draw();
	c3.draw();
	set_cursor_pos(1, 25);
	return 0;
}