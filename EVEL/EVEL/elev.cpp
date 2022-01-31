// contains class data end member function definitions
#include "elev.h"  // include class declarations
/////////////////////////////////////////////////////////////
//			function definitions for class declarations    //
/////////////////////////////////////////////////////////////

building::building()  // constructor
{
	char ustring[BUF_LENGTH];  // string for floor numbers

	init_graphics();  // initialize graphics
	clear_screen();   // clear sreen
	num_cars = 0; 
	for (int k = 0; k < NUM_CARS; k++)  // make elevators
	{
		car_list[k] = new elevator(this, num_cars);
		num_cars++;
	}
	for (int j = 0; j < NUM_FLOORS; j++)  // for each floor
	{
		set_cursor_pos(3, NUM_FLOORS - j); // put floor number
		itoa(j + 1, ustring, 10);  // on screen
		cout << setw(3) << ustring;
		floor_request[UP][j] = false;  // no floor requests yet
		floor_request[DN][j] = false;
	}
}  // end constructor

building::~building()  // destructor
{
	for (int k = 0; k < NUM_CARS; k++)
		delete car_list[k];
}

void building::master_tick()   // master timr tick
{
	int j;
	show_floor_reqs();  // display floor requests
	for (j = 0; j < NUM_CARS; j++)  // for each elevator
		car_list[j]->car_tick1();  // send it time tick 1
	for (j = 0; j < NUM_CARS; j++)  // for each elevator
		car_list[j]->car_tick2();  // send it time tick 2
}  // end master_tick()

void building::show_floor_reqs() const  // display floor requests
{
	for (int j = 0; j < NUM_FLOORS; j++)
	{
		set_cursor_pos(SPACING, NUM_FLOORS - j);
		if (floor_request[UP][j] == true)
			cout << '\x1E';  // up arrow
		else

			cout << ' ';
		set_cursor_pos(SPACING + 3, NUM_FLOORS - j);
		if (floor_request[DN][j] == true)
			cout << '\x1F';  // down arrow
		else
			cout << ' ';
	}
}  // end show_floor_reqs()

// record_floor_reqs() -- get requests from riders outside car
void building::record_floor_reqs()
{
	char ch = 'x';  // utility char for input
	char ustring[BUF_LENGTH];  // utility string for input
	int iFloor;  // floor from which request made
	char chDirection;  // 'u' or 'd' for up or down

	set_cursor_pos(1, 22);  // bottom of screen
	cout << "Press [Enter] to call an elevator: ";
	if (!kbhit())  // wait for keypress (must be CR)
		return;
	cin.ignore(10, '\n');
	if (ch == '\x1B')  // if escape key, end program
		exit(0);
	set_cursor_pos(1, 22);
	clear_line();  // clear old text
	set_cursor_pos(1, 22);  // bottom of screen
	cout << "Enter the floor you're on: ";
	cin.get(ustring, BUF_LENGTH);  // get floor
	cin.ignore(10, '\n');  // eat chars, including newline
	iFloor = atoi(ustring);  // convert to integer

	cout << "Enter direction you want to go (u or d): ";
	cin.get(chDirection);  // (avoid multiple linefeeds)
	cin.ignore(10, '\n');  // eat chars, including newline

	if (chDirection == 'u' || chDirection == 'U')
		floor_request[UP][iFloor - 1] = true;  // up floor request
	if (chDirection == 'd' || chDirection == 'D')
		floor_request[DN][iFloor - 1] = true;  // down floor request
	set_cursor_pos(1, 22);
	clear_line();  // clear old text
	set_cursor_pos(1, 23);
	clear_line();
	set_cursor_pos(1, 24);
	clear_line();
}  // end record_floor_reqs()

// get_floor_req() -- see if there's a specific request
bool building::get_floor_req(const int dir, const int floor) const
{
	return floor_request[dir][floor];
}

// set_floor_req() -- set specific floor request
void building::set_floor_req(const int dir, const int floor, const bool updown)
{
	floor_request[dir][floor] = updown;
}

// get_cars_floor() -- find where a car is
direction building::get_cars_dir(const int carNo) const
{
	return car_list[carNo]->get_direction();
}

/////////////////////////////////////////////////////////
//		function definitions for class elevator		   //
/////////////////////////////////////////////////////////

// constructor
elevator::elevator(building* ptrB, int nc) : ptrBuilding(ptrB), car_number(nc)
{
	current_floor = 0;  // start at 0 (user's 1)
	old_floor = 0;  // remember previous floor
	current_dir = STOP;  // stationary at start
	for (int j = 0; j < NUM_FLOORS; j++) // occupants have not pushed
		destination[j] = false;  // any buttons yet
	loading_timer = 0;  // not loading yet
	unloading_timer = 0; // not unloading yet
}  // end constructor

int elevator::get_floor() const  // get current floor
{
	return current_floor;
}

direction elevator::get_direction() const // get current direction
{
	return current_dir;
}

void elevator::car_tick1()  // tick  1 for each car
{
	car_display()
}