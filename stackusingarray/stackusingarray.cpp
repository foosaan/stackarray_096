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
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nstack is empty" << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	stackarray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "\n***Stack Menu***\n";
		cout << "1. Push\n" << endl;;
		cout << "2. Pop\n" << endl;
		cout << "3. Display\n" << endl;
		cout << "4. Exit\n" << endl;
		cout << "\nEnter your choice: ";
		cin >> ch;
		switch (ch) {
		case '1': {
			int element;
			cout << "\nenter an element :";
			cin >> element;
			s.push(element);
			break;
		}
		case '2':
			if (s.empty()) {
				cout << "\nStack is Empty." << endl;
				break;
			}
			s.pop();
			break;
		case '3':
			s.display();
			break;
		case '4':
			return 0;
		
	}
}