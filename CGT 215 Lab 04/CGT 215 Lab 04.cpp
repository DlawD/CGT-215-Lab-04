#include <iostream>

using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {

	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";

}

void factorial() {

	int x;
	int count;
	int sum = 1;
	cout << " Factorial: " << endl;
	cout << " Enter a number: ";
	cin >> x;
	while (x <= 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> x;
	}

	cout << x << "! = " << 1 ;
	for (count = 2; count <= x; count++) {
			cout << " * " << count;
			sum = sum * count;
	}
	cout << " = " << sum << endl;

}

void arithmetic() {
	
	int x;
	int add;
	int series;
	int sum;
	cout << " Arithmetic Series: " << endl;
	cout << " Enter a number to start at: ";
	cin >> x;
	sum = x;
	cout << " Enter a number to add each time: ";
	cin >> add;
	cout << " Enter the number of elements in the series: ";
	cin >> series;
	while (series <= 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> series;
	}

	cout << x;
	for ( series ; series > 1 ; series--) {
		cout << " + " << x + add;
		x = x + add;
		sum = sum + x;
	}
	cout << " = " << sum << endl;

}

void geometric() {

	int x;
	int mul;
	int series;
	int sum;
	cout << " Geometric Series: " << endl;
	cout << " Enter a number to start at: ";
	cin >> x;
	sum = x;
	cout << " Enter a number to multiply by each time: ";
	cin >> mul;
	cout << " Enter the number of elements in the series: ";
	cin >> series;
	while (series <= 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> series;
	}

	cout << x;
	for (series; series > 1; series--) {
		cout << " + " << x * mul;
		x = x * mul;
		sum = sum + x;
	}
	cout << " = " << sum << endl;

}

int main() {

	int choice;
	char again;

	do {

		printMenu();
		cin >> choice;

		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}

		cout << "Go Again? [Y/N] ";
		cin >> again;

	} while (again == 'y' || again == 'Y');

}