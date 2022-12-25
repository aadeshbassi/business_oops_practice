#pragma once
#include <iostream>
using namespace std;
class Business
{
private:
	string name;
	long number;
	int package;
	int day;
	char booking;
	float total;

public:
	Business() = default;
	Business(const Business&) = delete;
	Business& operator=(const Business&) = delete;
	Business& operator=(const Business&&);
	Business(const Business&&);
	void getGreeting();
	void getPackage();
	char getBooking();
	float calculatePayment();
	void displayFinal();
};

