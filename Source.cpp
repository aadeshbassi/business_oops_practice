#include "Business.h"
#include <iostream>
using namespace std;


int main()
{
	Business *obj = new Business();
	obj->getGreeting();
	obj->getPackage();
	obj->getBooking();
	obj->calculatePayment();
	obj->displayFinal();
	delete obj;
}