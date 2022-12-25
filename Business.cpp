#include "Business.h"

Business& Business::operator=(const Business&& val)
{
	this->name = val.name;
	this->booking = val.booking;
	this->day = val.day;
	this->number = val.number;
	this->package = val.package;
	this->total = val.total;
	return *this;
}



Business::Business(const Business&& val)
{
	this->name = val.name;
	this->booking = val.booking;
	this->day = val.day;
	this->number = val.number;
	this->package = val.package;
	this->total = val.total;
}

void Business::getGreeting()
{
	cout << " * * " << endl;
	cout << " ** * " << endl;
	cout << " *** Welcome to the Tropical Hotel Reservation Application ****" << endl;
	cout << " ** ** " << endl;
	cout << " * * " << endl;
	cout << endl;
	cout << endl;
	cout<< " RATE PER NIGHT " << endl;
	cout << " Apartment RM350 " << endl;
	cout << " Family RM250 " << endl;
	cout << " Deluxe RM200 " << endl;
	cout << " Standard RM150 " << endl;

	cout << "Please enter your full name: ";
	cin >> name;
	cout << "Please enter your phone number: ";
	cin >> number;
}

void Business::getPackage()
{
	cout << endl
		<< " CHOOSE THE PACKAGE " << endl;
	cout << "1 for Apartment" << endl;
	cout << "2 for Family" << endl;
	cout << "3 for Deluxe" << endl;
	cout << "4 for Standard " << endl;

	cout << "Enter your package: ";
	cin >> package;
	cout << endl
		<< "Please enter no of reservation days: ";
	cin >> day;
}

char Business::getBooking()
{
	cout << endl
		<< "***TYPE OF BOOKING***" << endl;
	cout << endl
		<< "You are given 15% discount off purchase through online booking!" << endl;
	cout << "M for Manual" << endl;
	cout << "O for Online" << endl;
	cout << "Enter type if your booking: ";
	cin >> booking;

	return booking;
}

float Business::calculatePayment()
{
	if (package == 1)
	{
		if (booking == 'O' || booking == 'o')
		{
			float rate = (350 * day);
			float gov_tax = rate * (0.05);
			float discount = (gov_tax + rate) * (0.15);
			total = (gov_tax + rate) - discount;
		}

		else if (booking == 'M' || booking == 'm')
		{
			float rate = (350 * day);
			float gov_tax = rate * (0.05);
			total = gov_tax + rate;
		}
	}

	else if (package == 2)
	{
		if (booking == 'O' || booking == 'o')
		{
			float rate = (250 * day);
			float gov_tax = rate * (0.05);
			float discount = (gov_tax + rate) * (0.15);
			total = (gov_tax + rate) - discount;
		}

		else if (booking == 'M' || booking == 'm')
		{
			float rate = (250 * day);
			float gov_tax = rate * (0.05);
			total = gov_tax + rate;
		}
	}

	else if (package == 3)
	{
		if (booking == 'O' || booking == 'o')
		{
			float rate = (200 * day);
			float gov_tax = rate * (0.05);
			float discount = (gov_tax + rate) * (0.15);
			total = (gov_tax + rate) - discount;
		}

		else if (booking == 'M' || booking == 'm')
		{
			float rate = (200 * day);
			float gov_tax = rate * (0.05);
			total = gov_tax + rate;
		}
	}
	else if (package == 4)
	{
		if (booking == 'O' || booking == 'o')
		{
			float rate = (150 * day);
			float gov_tax = rate * (0.05);
			float discount = (gov_tax + rate) * (0.15);
			total = (gov_tax + rate) - discount;
		}

		else if (booking == 'M' || booking == 'm')
		{
			float rate = (150 * day);
			float gov_tax = rate * (0.05);
			total = gov_tax + rate;
		}
	}
	return total;
}

void Business::displayFinal()
{
	cout << endl
		<< " TROPICA HOTEL " << endl;
	cout << " Your name & ID is: " << name << endl;
	cout << " Number Of Days :" << day << endl;
	cout << " Type of Package :" << package << endl;
	cout << " The total payment: RM" << total << endl;

	cout << endl
		<< "Thank you, please come again";

	cin.get();
}
