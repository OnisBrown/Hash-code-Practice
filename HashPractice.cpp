#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream input;
	input.open ("source/example.in");
	if (input.is_open())
	{
		cout << input;
	}
}