#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "math.h"
#include "complex.h"

int main(void){
	double gamma = tgamma(5.0);
	double bessel = j1(0.5);
	complex double sqrt2 = csqrt(-2.0);
	complex double eipi = cexp(M_PI * I);
	complex double ei = cexp(I);
	complex double ie = cpow(I, M_E);
	complex double ii = cpow(I, I);
	printf("gamma(5) =  %lg \n", gamma);
	printf("Bessel function J1(0.5) = %lg \n", bessel);
	printf("sqrt(-2) = %lg + %lg I\n", creal(sqrt2), cimag(sqrt2));
	printf("e^(i pi) = %lg + %lg I\n", creal(eipi), cimag(eipi));
	printf("e^i = %lg + %lg I\n", creal(ei), cimag(ei));
	printf("i^e = %lg + %lg I\n", creal(ie), cimag(ie));
	printf("i^i = %lg + %lg I\n", creal(ii), cimag(ii));

	printf("\n %.25g \n %.25lg \n %.25Lg \n", 1.f/9.f, 1./9., 1.L/9.L);
return 0;
}
