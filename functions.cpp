#include <iostream>
#include <Windows.h>
#include <typeinfo>
//get user input for their regular pay rate
float getUserPayRate()
{
	
	std::cout << "Enter regular rate: ";
	float x{};
	std::cin >> x;
	return x;
	
}
//get user input for their overtime pay rate
float getUserOvertimePayRate()
{
	std::cout << "Enter Overtime rate: ";
	float x{};
	std::cin >> x;

	return x;
}
//get user input for doubletime pay rate
float getUserDoubleRate()
{
	std::cout << "Enter doubltime rate: ";
	float x{ 0.0 };
	std::cin >> x;

	return x;
}
//get User input for how many regular hours worked
float getRegHour()
{
	bool redo = false;
	do
	{
		std::cout << "Enter regular hours worked: ";
		float x{ 0.0 };
		std::cin >> x;
		if (typeid(x) == typeid(float)) {
			return x;
		}
		else
			std::cout << "Invalid input.";
		redo = false;
	} while (!redo);
}
//get user input for how many overtime worked
float getOTHours()
{
	std::cout << "Enter OT hours worked: ";
	float x{ 0.0 };
	std::cin >> x;
	return x;
}
//get user input for how many doubletime worked
float getDTHours()
{
	std::cout << "Enter DT hours worked: ";
	float x{ 0.0 };
	std::cin >> x;
	return x;
}
float getHoliday()
{
	std::cout << "Enter Holiday hours obtained: ";
	float x{ 0.0 };
	std::cin >> x;
	return x;
}
float regCalculation(float regPay, float otPay, float dtPay, float regHour, float otHour, float regDoubletimeHours)
{
	float grossPay = (regPay * regHour) + (otPay * otHour) + (dtPay * regDoubletimeHours);

	return grossPay;
}
float calcAfterTax(float grossPay)
{
	float taxRate = 0.7337755378094847;
	float takeHome{ grossPay * taxRate };
	return takeHome;
}
bool retryP()
{
	bool redo = true;
	std::cout << "retry? (Y/N:) ";
	char reply;
	std::cin >> reply;

	if (reply == 'Y'|| reply == 'y')
	{
		redo = true;
		
	}
	else if (reply == 'N' || reply == 'n')
	{
		redo = false;
	}
	return redo;
}