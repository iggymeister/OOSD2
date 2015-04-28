#include "printClassValues.h"

void printClassValues(exampleClass obj)
{
	cout << "This function prints passed classes values." << endl << "Class int value: " << obj.getInt() << endl << "Class double value: " << obj.getDouble() << endl << "Class boolean value: " << obj.getBool() << endl << "Class string value: " << obj.getString() << endl << "Class char value: " << obj.getChar() << endl << "End of program;" << endl; 
}
