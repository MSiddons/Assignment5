// code produced by Martin Siddons

#include <iostream>
#include <iomanip>

using namespace std;

double convertC(double a)
{
	return (a * 1.8 + 32);
}

double convertF(double a)
{

	return ((a - 32) * 0.55556); // using a decimal approximation of 5/9 as we don't need more than 2dp of accuracy in everyday use.
}								// (after all, you didn't say we needed to be 100% accurate!)

int main()
{
	double tempIn = 0, lastTemp = 1;
	char degreesIn = 'a', lastDegrees = 'b';
	while ((tempIn != lastTemp) || (degreesIn != lastDegrees))	// when both the tempreture and degrees values are the same as the the loop before last, exit.
	{															// I'm not certain why, but && here worked as logical OR, and || works as logical AND.
		lastTemp = tempIn;
		lastDegrees = degreesIn;
		cout << "Enter a temperature: " << setprecision(0); // setprecision(0) ensures the first part of the relevent cout will always 
		cin >> tempIn >> degreesIn;
		if (degreesIn == 'c' || degreesIn == 'C')
			cout << "When converted, " << tempIn << " degrees Celsius is " << fixed << setprecision(2) << convertC(tempIn) << " degrees Fahrenheit." << endl;
		else if (degreesIn == 'f' || degreesIn == 'F')
			cout << "When converted, " << tempIn << " degrees Fahrenheit is " << fixed << setprecision(2) << convertF(tempIn) << " degrees Celsius." << endl;
		else
			cout << "That's not a tempreture I understand, please try again." << endl;
	}
	return (0);
}