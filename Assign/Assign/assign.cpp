#include<iostream>

using std::cout;
using std::endl;

int main()
{
	int ans = 27;
	ans += 10;
	cout << ans << ", ";
	ans -= 7;
	cout << ans << ", ";
	ans *= 2;
	cout << ans << ", ";
	ans /= 3;
	cout << ans << ", ";
	ans %= 3;
	cout << ans << endl;
	return 0;
}