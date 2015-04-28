#include "class.h"

exampleClass::exampleClass(int i, double d, string s, bool b, char c)
{
intVal = i; 
doubleVal = d; 
stringVal = s; 
boolVal = b; 
charVal = c;
}

int exampleClass::getInt()
{
	return intVal;
}

double exampleClass::getDouble()
{
	return doubleVal;
}

string exampleClass::getString()
{
	return stringVal;
}

bool exampleClass::getBool()
{
	return boolVal;
}

char exampleClass::getChar()
{
	return charVal;
}
