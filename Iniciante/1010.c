#include <stdio.h>
#include <stdlib.h>

int main(){

	int p1, p2, q1, q2;
	double v1, v2;

	scanf("%d %d %lf", &p1, &q1, &v1);
	scanf("%d %d %lf", &p2, &q2, &v2);

	printf("VALOR A PAGAR: R$ %.2lf\n", q1 * v1 + q2 * v2);

	return 0;
}
