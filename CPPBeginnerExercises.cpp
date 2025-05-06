
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void information() {
    //returns how much tax, stateTax, countyTax and totalTax that you have in the console
    double sales = 95000;
    cout << "Your amount in sales: $" << sales << endl;
    //stateTax is at 4%
    const double salesTaxRate = 0.04;
    double salesTax = sales * salesTaxRate;
    cout << "Your amount in salesTax is: $ " << salesTax << endl;
    //countyTax is at 2%
    const double countyTaxRate = 0.02;
    double countyTax = sales * countyTaxRate;
    cout << "Your countyTax is: $" << countyTax << endl;
    //print out the total amount of tax
    double totalTax = countyTax + salesTax;
    cout << "Your totalTax is: $" << totalTax << endl;
}

void randomNumber() {
    long elapsedSeconds = time(0);
    srand(elapsedSeconds);
    int number = rand() % 10;
	cout << number << endl;
}

void randomizeNumberInRange() {
    int minValue = 1;
	int maxValue = 100;

	srand(time(0)); // seed the random number generator with the current time
	int firstRandomNumber = rand() % (maxValue - minValue + 1) + minValue; // generates a random number between the min and max values
    int secondRandomNumber = rand() % (maxValue - minValue + 1) + minValue; // generates a random number between the min and max values
	cout << firstRandomNumber << ", " << secondRandomNumber << endl;
}
void inputName() { //Enter your name into the console and it returns your name
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << name << endl;
}

void inputValues() {
    cout << "Enter values for x and y:   ";
    double x;
    double y;
    cin >> x >> y;
    cout << x + y << endl;
}

void convertFahrenheitCelcius() {
    cout << "Enter value for a temperature in fahrenheit: ";
    double fahrenheit;
    cin >> fahrenheit;
    //convert fahrenheit to celsius
    double celcius = (5.0 / 9.0) * (fahrenheit - 32.0);
    cout << "Your temperature in fahrenheit converted to Celsius is: " << celcius << endl;
}

void mathFunctions() {
    double result = pow(2, 3);
    cout << result << endl;
}

void calculateCircle() {
    //asks user to enter the radius of a circle and prints the area of a circle
    cout << "Enter the radius of a circle: ";
    double radius;
    cin >> radius;
    const double M_PI = 3.14;
    double calculateAreaofCircle = pow(radius, 2) * M_PI;
    cout << "the area of your circle is: " << calculateAreaofCircle << endl;

}

void fundementalTypes() {
    double price = 99.99;
    float interestRate = 3.67f;
    long fileSize = 90000L;
    char letter = 'a';
    auto isValid = true;

}

void narrowing() {
	//narrowing conversion
	int number = 1000000000;
	short another = number; //this is a narrowing conversion
	cout << another << endl;
}

void fundementalTypesScenarios() {
    int number{ 19842192 };
    cout << number << endl;
}

void numberSystems() {
    int number = 0;
    number--;
    cout << number << endl;
}

int main() {
    //information();
    //inputName();
    //inputValues();
    //convertFahrenheitCelcius();
    //calculateCircle();
    //fundementalTypesScenarios();
    //numberSystems();
	//narrowing();
	//randomNumber();
	randomizeNumberInRange();
    return 0;

}


