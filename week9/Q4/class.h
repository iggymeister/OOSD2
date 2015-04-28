#include <string>
using namespace std;

class exampleClass
{
	public:
		exampleClass(int, double, string, bool, char);
		int getInt();
		double getDouble();
		string getString();
		bool getBool();
		char getChar();
	private:
		int intVal;
		double doubleVal;
		string stringVal;
		bool boolVal;
		char charVal;
};
