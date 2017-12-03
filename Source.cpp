#include "git bruh.h"
#include <iostream>

using namespace std;

int main()
{
	int x;
	int z = 1;
	x = Singleton::Instance()->skaiciavimas(z);
	Singleton::Instance()->writeToLogFile();
    return 0;
}