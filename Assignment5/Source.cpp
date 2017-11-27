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

	return ((a - 32) * 0.55556); // using a decimal approximation of 5/9 as we don't need more than 2dp of accuracy for everyday use.
}								// (after all, you didn't say the output needed to be 100% accurate!)

int main()
{
	double tempIn = 0, lastTemp = 1;
	char degreesIn = 'a', lastDegrees = 'b';
	while ((tempIn != lastTemp) || (degreesIn != lastDegrees))	// when both the tempreture and degrees values are the same as the loop before last, exit.
	{															// I'm not certain why, but '&&' here acts as logical OR, and '||' acts as logical AND. Spooky.
		lastTemp = tempIn;
		lastDegrees = degreesIn;
		cout << "Enter a temperature: " << fixed; // setprecision(0) ensures the first part of the relevent cout will always be shown correctly.
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