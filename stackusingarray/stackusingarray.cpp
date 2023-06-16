#include <iostream>
#include <string>
using namespace std;

class stackarray {
private:
	int stack_array[5];
	int top;
public:
	//constructor
	stackarray() {
		top = -1;
	}
	int push(int element) {
		if (top == 4) { //step 1
			cout << "number of data excessds the limit" << endl;
			return 0;
		}
		top++; //step 2
		stack_array[top] = element; //step3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
	}
};