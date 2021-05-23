# include <stdio.h>

void draw(int h);

int main(void)
{

	int n = 50;
	int *p = &n;
	printf("%p\n", p);
	printf("%i\n", *p);
	printf("---------------------------\n");
	for (int i =0; i<3; i++)
	{	// & means memory address AND p short for pointer 
		printf("%p\n", &i);	
	// * before & means value sttored in that memory address AND i short for int  
		printf("%i\n", *&i);		
	}
	printf("\n");
}
