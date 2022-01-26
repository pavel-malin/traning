#include <iostream>
using namespace std;

int main() {
    int ages[5];
    int i =0;
    for (i; i < 5; ++i)
    {
        cin >> ages[i];
       
    }
    for (int j = 0; j < 5; j++)
    {
        if (ages[j] > ages[i])
            cout << ages[j] << endl;
    }
   
          //your code goes here
  

    return 0;
}