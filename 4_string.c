# include <stdio.h>

void draw(int h);

int main(void)
{
	char *s= "HAMZA";
	printf("%s\n",s);
	printf("is stored in address: %p\n",s);
	printf("letter M is stored in address: %p\n",&s[0]);
	printf("letter M is stored in address: %p\n",&s[1]);
	printf("letter M is stored in address: %p\n",&s[2]);
	printf("letter M is stored in address: %p\n",&s[3]);
	printf("letter M is stored in address: %p\n",&s[4]);

}


