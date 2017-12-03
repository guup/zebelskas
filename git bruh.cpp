#include <git bruh.h>
#include <iostream>

using namespace std;

// Global static pointer used to ensure a single instance of the class.
Singleton* Singleton::m_pIntance = NULL;

/** This function is called to create an instance of the class.
Calling the constructor publicly is not allowed. The constructor
is private and is only called by this Instance function.
*/

Singleton* Singleton::Instance()
{
	if (!Singleton::m_pIntance)   // Only allow one instance of class to be generated.
		Singleton::m_pIntance = new Singleton

	return Singleton::m_pIntance;
}

void Singleton::writeToLogFile()
{
	cout << "ats: " << x << endl;
}

int Singleton::skaiciavimas(int z){
	int ats;
	ats = z+1;
	x = ats;
	return ats;

}
