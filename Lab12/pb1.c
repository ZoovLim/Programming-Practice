#include <stdio.h>
#include <stdlib.h>

double df1(double);
double f1(double);
double df2(double);
double f2(double);
double newtonMethod(double, double(*fp)(double), double(*dfp)(double));

int a, b, c, d;

int main(){
	double x01, x02;
	double result1, result2;
	scanf("%d  %d %d %d", &a, &b, &c, &d);
	scanf("%lf %lf", &x01, &x02);
	result1 = newtonMethod(x01, f1, df1);
	result2 = newtonMethod(x02, f2, df2);
	printf("%lf %lf\n", result1, result2);
	return 0;
}

double newtonMethod(double x0, double (*fp)(double), double (*dfp)(double)){
	double x1;

	while(1){
		x1 = x0 - fp(x0) / dfp(x0);

		if((x1 - x0) >= 0){
			if((x1 - x0) <= 0.000001) return x1;
			else x0 = x1;
		}
		else if((x1 - x0) > -0.000001) return x1;	
		else x0 = x1;
	}
}

double df1(double x){
	return 3*a*x*x + 2*b*x + c;
}

double f1(double x){
	return a*x*x*x + b*x*x + c*x + d;
}

double df2(double x){
	return 3*b*x*x + 2*a*x + c;
}

double f2(double x){
	return b*x*x*x + a*x*x + c*x + d;
}
