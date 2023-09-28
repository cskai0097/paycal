#include <iostream>

float getUserPayRate();
float getUserOvertimePayRate();
float getUserDoubleRate();

float getRegHour();
float getOTHours();
float getDTHours();
float getHoliday();
float regCalculation(float regPay, float otPay, float dtPay, float regHour, float otHour, float regDoubletimeHours);
float calcAfterTax(float grossPay);
bool retryP();
