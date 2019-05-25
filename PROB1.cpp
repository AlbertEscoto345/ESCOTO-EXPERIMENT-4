#include <iostream>
using namespace std;

int function1(int a, int b)
{
	int c;
	c = a + b;
	return c;
}
int function2(int a, int b)
{
	int c;
	c = a - b;
	return c;
}
int function3(int a, int b)
{
	int c;
	c = a * b;
	return c;
}
int function4(int a, int b)
{
	int c;
	c = a / b;
	return c;
}
int function5(int a, int b)
{
	int c;
	c = a % b;
	return c;
}

int main()
{
	int a, b, d, e;
	char yesno;
	
	do
	{
	cout << endl;
	cout << "Enter operation choice: " << endl;
	cout << "1 - ADD" << endl;
	cout << "2 - SUBTRACT" << endl;
	cout << "3 - MULTIPLY" << endl;
	cout << "4 - DIVIDE" << endl;
	cout << "5 - MODULUS" << endl;
	cout << endl;
	cin >> d;
	switch(d)
	{
		case(1):
			cout << "Input two integer values: " << endl;
			cin >> a;
			cin >> b;
			e = function1 (a, b);
			cout << endl;
			cout << "Result: " << e << endl;
			break;
		case(2):
			cout << "Input two integer values: " << endl;
			cin >> a;
			cin >> b;
			e = function2 (a, b);
			cout << endl;
			cout << "Result: " << e << endl;
			break;
		case(3):
			cout << "Input two integer values: " << endl;
			cin >> a;
			cin >> b;
			e = function3 (a, b);
			cout << endl;
			cout << "Result: " << e << endl;
			break;
		case(4):
			cout << "Input two integer values: " << endl;
			cin >> a;
			cin >> b;
			e = function4 (a, b);
			cout << endl;
			cout << "Result: " << e << endl;
			break;
		case(5):
			cout << "Input two integer values: " << endl;
			cin >> a;
			cin >> b;
			e = function5 (a, b);
			cout << endl;
			cout << "Result: " << e << endl;
			break;
		default:
			cout << "Should you choose to continue, please choose from choices 1 to 5." << endl;
			break;
	}
	cout << endl;
	cout << "To continue, type Y: ";
	cin >> yesno;
	} while (yesno == 'y' || yesno == 'Y');
	
	return 0;
}
