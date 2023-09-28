#include <iostream>
#include <iomanip>
#include "io.h";

int main()
{
	
	bool retry = true;
	
	do{

		float regPay = getUserPayRate();
		float otPay = getUserOvertimePayRate();
		float dtPay = getUserDoubleRate();

		float regHour = getRegHour();
		float otHour = getOTHours();
		float dtHour = getDTHours();
		//calculate gross
		float grossPay = regCalculation(regPay, otPay, dtPay, regHour, otHour, dtHour);
		std::cout << "Your gross pay is: $" << std::fixed << std::setprecision(2) << std::round(grossPay) << "\n";
		//calculate after tax
		float takeHome = calcAfterTax(grossPay);
		std::cout << "Your Take home is: " << std::fixed << std::setprecision(2) << std::round(takeHome) << "\n";
		std::cout << "After savings deposit: " << takeHome - 250 << "\n";
		std::cout << "--------------------------------------------------- "<< "\n";
		if(retryP())
		{
			retry = true;

		}
		else
		{
			retry = false;
		}
	} while (retry);



	return 0;
}