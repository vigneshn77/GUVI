#include <stdio.h>

int main(void) {
	int num;
	num = 3;
        printf("INPUT : %d\n",num);
	if(num != 0) {
		if (num > 0)
		printf("OUTPUT: POSITIVE\n");
		else
		printf("OUTPUT: NEGATIVE\n");
	}
	else
	printf("OUTPUT: ZERO\n");
	return 0;
}
