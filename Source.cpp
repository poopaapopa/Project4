#include <iostream>
#include "time.h"
#define Arrflg 1;
#define STROKA "First Line\n"\
                "Second Line\n"
using namespace std;

int main()
{
	char ibuf;
	int LO, HI;
	cin >> LO;
	cin >> HI;
	cout << RAND_MAX;
	for (int i = 0; i < 10000; i++)
	{
		ibuf = LO + static_cast <char> (rand()) / (static_cast <char> (RAND_MAX / (HI - LO)));
		cout << ibuf << " ";
	}
	//cout << STROKA;
	return 0;
}