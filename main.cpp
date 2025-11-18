#include <iostream>
using namespace std;

int main() {
	char runAgain = 'y';
	while (runAgain == 'y' || runAgain == 'Y') {
		int a, b;
		int ver;
		int ans;
		string typeOfEquation;
	
		cout << "====================\n";
		cout << "  Calc++ But Worse  \n";
		cout << "====================\n";
		cout << "Based on "
	
		cout << "First number: ";
		cin >> a;
	
		cout << "Second number: ";
		cin >> b;
	
		cout << "Select operation\n";
		cout << "1. Addition\n";
		cout << "2. Subtraction\n";
		cout << "3. Multiplication\n";
		cout << "4. Division\n";
		cout << endl;
		cin >> ver;
	
		system("cls");
	
		switch (ver) {
			case 1:
				ans = a + b;
				typeOfEquation = "+";
			break;
			case 2:
				ans = a - b;
				typeOfEquation = "-";
			break;
			case 3:
				ans = a * b;
				typeOfEquation = "x";
			break;
			case 4:
				ans = a % b;
				typeOfEquation = "÷";
			break;
		}
	
		cout << "Result of " << a << " " << typeOfEquation << " " << b << " " << "=" << " " << ans;
		
		cout << "\n\n" << "Do you want to do another equation? (y/n): ";
		cin >> runAgain;
		
		system("cls");
	}

	cout << "Goodbye!\n";
	return 0;
}
