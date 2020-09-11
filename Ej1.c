#include <stdio.h>
#include <math.h>

#define T0 0
#define TN 10
#define DELTAT 0.0005

#define PI 3.1415927

#define A 50
#define F 29
#define PHI PI/2

double onda(double t, float a, float f, float phi) {
	return (a * sin(2 * PI * f * t + phi)) * DELTAT;
}

int main() {
	
	for(double t = T0; t <= TN + DELTAT; t += DELTAT) {
		printf("%f ; %f\n", t, onda(t, A, F, PHI));
	}
	return 0;
}