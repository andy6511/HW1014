#include <stdio.h>
#include <stdlib.h>
int main()
{
	double Hight, Weight, BMI;

	printf(" tall (cm) \n");
	scanf_s("%lf", &Hight);

	printf(" weigh (kg) \n");
	scanf_s("%lf", &Weight);

	BMI = Weight / ((Hight / 100) * (Hight / 100));
	printf("Your BMI is %lf\n", BMI);

	if (BMI < 18.5) {
		printf("Underweight\n");
	}
	if (BMI >= 18.5 && BMI < 24.9) {
		printf("Normal\n");
	}
	if (BMI >= 25 && BMI < 29.9) {
		printf("Overweight\n");
	}
	if (BMI >= 30) {
		printf("Obese\n");
	}
	return 0;
}