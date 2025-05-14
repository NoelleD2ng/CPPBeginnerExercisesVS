
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
	system("pause");
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

void ascii() {
	char c1, c2, c3, c4, c5;
	cout << "Enter 5 characters: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << "The ASCII values are: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;
	system("Pause > 0");
}

void ifElseStatements() {
    //user enters integer number
    //program write out if that number is even or odd
    int number;
    cout << "Enter an integer number: ";
    cin >> number;;
    if (number % 2 == 0) {
        cout << "Your number is even. " << endl;
    }
    else {
        cout << "Your number is odd. " << endl;
    }
	cout << "Thank you! Bye..." << endl;
    system("pause>0");
    
}// end of function

void triangleDetermination() {
    //user enters side lenghths of a triangle (a.b.c)
	//program should write out wheter that triangle is equilateral, isosceles or scalene
    int a, b, c;
	cout << "Enter the lengths of the three sides of a triangle: ";
	cin >> a >> b >> c;
	if (a == b && b == c) {
		cout << "The triangle is equilateral." << endl;
	}   
	else if (a == b || b == c || a == c) {
		cout << "The triangle is isosceles." << endl;
	}
	else {
		cout << "The triangle is scalene." << endl;
	}
	cout << "Thank you! Bye..." << endl;
    system("pause>0");
}

void arithmeticOperators() {
	// +, - , *, /, %

	cout << 5+ 2 << endl; // addition
	cout << 5 / 2.0 << endl; // division


    system("pause");
}

void swappingVariables() {
    
    //Program for swapping values of two variables without a third variable
    int a = 20;
	int b = 10;
	a = a + b; // a now becomes 30
	b = a - b; // b becomes 20
	a = a - b; // a becomes 10
	cout << "a" << a << endl;
	cout << "b" << b << endl;
	system("pause>0");
}

void bmiCalculator() {
    //BMi calculator
    //weight(kg) / height * height
	//underweight: < 18.5
	// Normal weight 18.5 - 24.9
    //overweight > 25
    double weight;
    double height;
	cout << "Enter your weight in kg: ";
	cin >> weight;
	cout << "Enter your height in meters: ";
	cin >> height;
	double bmi = weight / (height * height);
	cout << "Your BMI is: " << bmi << endl;
	if (bmi < 18.5) {
		cout << "You are underweight." << endl;
	}
	else if (bmi >= 18.5 && bmi <= 24.9) {
		cout << "You are normal weight." << endl;
	}
	else {
		cout << "You are overweight." << endl;
	}
	system("pause>0");

}

void calculator() {
    float num1, num2, result;
	char operation;
	cout << "*Calculator*" << endl;
    cin >> num1 >> operation >> num2;
    bool isSkipFinalPrint = false;

    switch (operation)
    {
    case '-': result = (num1 - num2);break;
    case '+': result = (num1 + num2);break;
    case '*': result = (num1 * num2);break;
    case '/': result = (num1 / num2);break;
    case '%': 
        bool isNum1Integer, isNum2Integer;

        isNum1Integer = (num1 == (int)num1);
		isNum2Integer = (num2 == (int)num2);
        if (isNum1Integer && isNum2Integer) {
            result = ((int)num1 % (int)num2);
        }
        else {
            cout << "Error: Modulus operator can only be used with integers." << endl;
        }
        isSkipFinalPrint = true;
        break;
	default: cout << "Error: Invalid operator." << endl;
        isSkipFinalPrint = true;
    }

    if(!isSkipFinalPrint) {
        cout << num1 << operation << num2 << "=" << result;
    }
    
    system("pause>0");
}

void checkNumberOfDaysInMonth() {
    //build a program that checks number of days in a month
    int month, year;
    cout << "Year,month: " ;
    cin >> year >> month;
    //(year % 4 == 0 && year %100 != 0 || year % 400 == 0)
    switch (month) {
    case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
        cout << "29 days month. " : cout << "28 days month. "; break;
    case 4:
    case 6://leaving it blank without a break makes the code run until it finds a case and breaks
    case 9:// if the month is equal to 4,6,9, or 11, then it will print that there are 30 days and then break
    case 11: cout << "30 days month. "; break;
    case 1:
    case 3: // if the month is equal to 1, 3, 5 7,8, 10, 12 then these are the months that will have 31 days and then break
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:cout << "31 day s month. "; break;
    default: cout << "Not valid!";
    }
    system("pause > 0");
}

void loops() {
    // write out all the numbers between 100 - 500 that are divisible by 3 and 5

    int num = 100;
    while (num <= 500) {
        if (num % 3 == 0 && num % 5 == 0) {
            cout << num << " is divisible\n";
            num++;
        }else {
            num++;
        }
    }
    system("pause > 0");
}

void countDigitsInNumber() {
    //write a program that counts the number of digits of a number
    int number;
    int counter = 0;
    cout << "Enter in a number: ";
    cin >> number;
    while (number > 0) {
        number /= 10;
        counter++;
    }
    cout << "Number contains " << counter << " digits";
    system("pause > 0");
}  
void pinNumber() {

    int userPin = 1234, pin, errorCounter = 0;

    do {
        cout << "Enter your pin: ";
        cin >> pin;
        if (pin != userPin) {
            errorCounter++;
        }
            
    } while (userPin != pin && errorCounter < 3);

    if (errorCounter < 3) {
        cout << "Loading...";
    }
    else {
        cout << "Blocked...";
    }
    system("Pause > 0");
}

void drawRectangle() {
    // this programs draws a rectangle by user inputting a height length and type of symbol to use
    int height, width;
    char symbol;

    cout << "Enter a height for your rectangle: ";
    cin >> height;
    cout << "Enter a width for your rect angle: ";
    cin >> width;
    cout << "Enter a symbol --> ";
    cin >> symbol;

    for (int i = 0; i < height; i++) {
        cout << symbol << " ";
        for (int j = 0; j < width; j++) {
            cout << symbol << " ";
        }
        cout << endl;
    }

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
	//randomizeNumberInRange();
	//ascii();
	//ifElseStatements();
	//triangleDetermination();
	//arithmeticOperators();
	//bmiCalculator();
    //calculator();
    //checkNumberOfDaysInMonth();
    //loops();
   //countDigitsInNumber();
    //pinNumber();
    drawRectangle();
    return 0;

}


