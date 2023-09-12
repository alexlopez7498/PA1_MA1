#include "lab4.h"

int read_int(FILE* infile)
{
	int num = 0;
	fscanf(infile, "%d", &num);
	return num;
}
double read_double(FILE* infile)
{
	double num = 0;
	fscanf(infile, "%lf", &num);
	return num;

}
char read_char(FILE* infile)
{
	char c = '\0';
	fscanf(infile, " %c", &c);
	return c;

}
double high_value(double number1, double number2, double number3, double number4, double number5)
{
	double high = number1;
	if (number2 > high)
	{
		high = number2;
	}
	if (number3 > high)
	{
		high = number3;
	}
	if (number4 > high)
	{
		high = number4;
	}
	if (number5 > high)
	{
		high = number5;
	}
	return high;
}
double low_value(double number1, double number2, double number3, double number4, double number5)
{
	double low = number1;
	if (number2 < low)
	{
		low = number2;
	}
	if (number3 < low)
	{
		low = number3;
	}
	if (number4 < low)
	{
		low = number4;
	}
	if (number5 < low)
	{
		low = number5;
	}
	return low;
}
double calculate_sum(double number1, double number2, double number3, double number4, double number5)
{
	double sum = 0;
	sum = number1 + number2 + number3 + number4 + number5;
	return sum;
}
double calculate_mean(double sum, int number)
{
	double mean = 0;

	mean = sum / number;
	return mean;

}
//
//double calculate_BMR(double weight, double height, double age, char gender)
//{
//	double BMR = 0;
//	if (gender == 'm')
//	{
//		BMR = 66 + (6.23 * weight) + (12.7 * height * 12) - (6.8 * age);
//	}
//	if (gender == 'w')
//	{
//
//		BMR = 655 + (4.35 * weight) + (4.7 * height * 12) - (4.7 * age);
//
//	}
//	return BMR;
//
//}
//double calculate_calories(double BMR, int activity)
//{
//	double calories = 0;
//	if (activity == 1)
//	{
//		calories = BMR * 1.2;
//	}
//	if (activity == 2)
//	{
//		calories = BMR * 1.375;
//	}
//	if (activity == 3)
//	{
//		calories = BMR * 1.55;
//	}
//	if (activity == 4)
//	{
//		calories = BMR * 1.725;
//	}
//	if (activity == 5)
//	{
//		calories = BMR * 1.9;
//	}
//	return calories;
//}