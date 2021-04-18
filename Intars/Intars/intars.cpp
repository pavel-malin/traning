#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int var1;
    int var2;
    var1 = 20;
    var2 = var1 + 10;
    setlocale(LC_ALL, "");
    cout << "var1+10 равно ";
    cout << var2 << endl;
    return 0;
}
