
#ifndef LAB4_H
#define LAB4_H
#define _CRT_SECURE_NO_WARNINGS // letting my scanf work


#include <stdio.h> // lets me use printf() and scanf()
#include <math.h> // lets me use sqr t() and pow () for the code


double calculate_BMR(double weight, double height, double age, char gender);
double read_double(FILE* infile);
int read_int(FILE* infile);
char read_char(FILE* infile);
double calculate_calories(double BMR);
double height_to_inches(height);
double calculate_sum(double number1, double number2, double number3, double number4, double number5);
double calculate_mean(double sum, int number);
double high_value(double number1, double number2, double number3, double number4, double number5);
double low_value(double number1, double number2, double number3, double number4, double number5);
double average_value(double number1, double number2, double number3, double number4, double number5);
#endif#
