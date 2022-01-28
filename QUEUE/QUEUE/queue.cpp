#include <iostream>
#include<string>
using namespace std;

class Queue {
	int size;
	int* queue;

public:
	Queue() {
		size = 0;
		queue = new int[100];
	}
	void add(int data) {
		queue[size] = data;
		size++;
	}
	void add(string name)
	{
		queue[size] = name;
		size++;
	}
	void remove() {
		if (size == 0) {
			cout << "Queue is empty" << endl;
			return;
		}
		else {
			for (int i = 0; i < size - 1; i++) {
				queue[i] = queue[i + 1];
			}
			size--;
		}
	}
	void print() {
		if (size == 0) {
			cout << "Queue is empty" << endl;
			return;
		}
		for (int i = 0; i < size; i++) {
			cout << queue[i] << " <- ";
		}
		cout << endl;
	}
	Queue operator+(Queue& obj) {
		Queue res;
		for (int i = 0; i < this->size; i++) {
			res.add(this->queue[i]);
		}
		for (int i = 0; i < obj.size; i++) {
			res.add(obj.queue[i]);
		}
		return res;
	}

};

int main() {
	Queue<int> q1;
	q1.add(42); q1.add(2); q1.add(8);  q1.add(1);
	q1.print();

	Queue<string> q2;
	q2.add("Dave"); q2.add("John"); q2.add("Amy");
	q2.print();

	return 0;
}



/*
#include <iostream>
using namespace std;

int main() {
    int ages[5];
    int i =0;
    for (i; i < 5; ++i)
    {
        cin >> ages[i];
       
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (ages[j] > ages[i])
                cout << ages[j] << endl;
            else
                continue;

        }
    }
          //your code goes here
  

    return 0;
}
*/