#include <cctype>
#include <fstream>
#include <iostream>
#include <cstring>


using namespace std;

int main()
{
	char c;
	char *piy = new char[255];
	int i=0, len=0;
	ifstream fi("f.txt");
	if (!fi.is_open())
		cout <<"nope" << endl;
	else
	{
		do
		{
		c = fi.get();
		piy[i] = toupper(c);
		i++;
		} while (!fi.eof());
		
	}
	ofstream fi2("g.txt", ios_base::trunc);
	if (!fi2.is_open())
		cout << "Nope" << endl;
	else
		for (len; len<(i-1); len++)
		{
		fi2 << piy[len];	
		}
return 0;
}
