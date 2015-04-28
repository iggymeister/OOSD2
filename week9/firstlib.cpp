#include <iostream>
#include <string>
#include "firstlib.h"
using namespace std;
void printGreeting()
{
int ndays;
cout << "Welcome to C++ Library Programming" << endl;

getMyLocation();

cout << "This program predicts weather forecast up to 3 days." << endl << "Please enter how many days forward you want the weather forecast for: " << endl;
cin >> ndays;
weatherForecast(ndays);
}

void weatherForecast(int n)
{
if(n < 1 || n > 3)
{
cout << "The number of days is out of range. Please restart the program." << endl;
}
else
{
int highest[3] = {15, 17, 20};
int lowest[3] = {10, 12, 18};
bool rainfall[3] = {true, true, false};
double windspeed[3] = {45.25, 20.57, 12.98};
string windDirection[3] = {"North", "NorthWest", "South"};
for(int i = 0; i < n; i++)
{
cout << endl << "Day " << i+1 << endl << "a) Highest degree Celsius predicted: " << highest[i] << endl << "b) Lowest degree Celsius predicted: " << lowest[i] << endl << "c) Rainfall predicted: " << rainfall[i] << endl << "d) Windspeed predicted: " << windspeed[i] << endl << "e) Wind-direction: " << windDirection[i] << endl;
} 
}
}

void getMyLocation()
{
	string stringRef;
	cout << "Please enter the string reference: " << endl;
	cin >> stringRef;
	cout << "The location of the passed string reference is: " << &stringRef << endl << endl;
}
