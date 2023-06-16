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
	
	void pop() {
		if (empty()) { //step 1
			cout << "\nstack is empty. cannot pop." << endl;
			return; //1.b
		}

		cout << "\nthe pepped element is :" << stack_array[top] << endl; //step 2
		top--;//step 3 decrement
	}

	//method for check if data empty
};