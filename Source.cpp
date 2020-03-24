#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	char* array = new char[10000], c;
	int count = 0;
	string message;
	cout << "Input a string to convert the string to all capital letters. End the message with the '#' character." << endl;
	cout << "Warning! Strings longer than 10000 characters may deallocate memory elsewhere in the program." << endl << endl;
	do
	{
		cin.get(c);
		if (c != '#')
		{
			array[count] = c;
			message += array[count];
			count++;
		}
	} while (c != '#');
	cout << endl;
	char* sentence = new char[count];
	for (int i = 0; i < count; i++)
		sentence[i] = toupper(array[i]);
	delete[] array;
	array = 0;
	cout << "The inputted sentence is: " << message << endl << endl;
	cout << "The CAPS sentence is: ";
	for (int i = 0; i < count; i++)
		cout << sentence[i];
	cout << endl;
	return 0;
}