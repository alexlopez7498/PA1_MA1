#include "lab4.h"

//int main(void)
//{
	//char gender = '\0';
	//double weight = 0, height = 0;
	//int age = 0, activity_level = 0;
	//double BMR = 0;
	//double calories = 0;
	//FILE* infile = fopen("input.txt", "r");



	//age = read_int(infile);
	//gender = read_char(infile);
	//weight = read_double(infile);
	//height = read_double(infile);
	//activity_level = read_int(infile);

	//printf("%d\n %c\n %lf\n %lf\n %d\n", age, gender, weight, height, activity_level);

	//BMR = calculate_BMR(weight, height, age, gender);
	//
	//calories = calculate_calories(BMR, activity_level);
	//printf("%lf\n", calories);

	//return 0;

//}
#include "lab4.h"

int main(void)
{
	int number1 = 0, number2 = 0, number3 = 0, number4 = 0, number5 = 0;
	double average = 0;
	int high = 0, low = 0, sum = 0;

	FILE* infile = fopen("input.txt", "r");
	number1 = read_int(infile);
	number2 = read_int(infile);
	number3 = read_int(infile);
	number4 = read_int(infile);
	number5 = read_int(infile);
	sum = calculate_sum(number1, number2, number3, number4, number5);
	average = calculate_mean(sum, 5);
	high = high_value(number1, number2, number3, number4, number5);
	low = low_value(number1, number2, number3, number4, number5);

	printf("%lf\n %d\n %d\n", average, high, low);
}