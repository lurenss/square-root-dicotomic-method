#include "es1B.h"

double radice_quadrata(double x, double epsilon) {
	double a = 1;
	double b = x;
	double med;
	while((b-a)>=epsilon){
		med = (a+b)/2.0;
		if((med*med) > x){
			b = med;
		}
		else{
			a = med;
		}
	}
	return med;

}
