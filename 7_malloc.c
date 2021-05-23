# include <stdio.h>
# include <stdlib.h>


int main(void)
{

	int *x;
	int *y;

	x=malloc(sizeof(int));
	if (x==NULL){
		return 1;
	}
	*x=42;
	printf("x is: %i\n", *x);
	y=x;
	*y=13; 
		printf("x now is:%i\n", *x);
		printf("y is: %i\n", *y);
}
