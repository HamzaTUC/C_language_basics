# include <stdio.h>

int main(void)
{
	char names[4];
	names[0]= 'h';
	names[1]= 'a';
	names[2]= 'm';
	names[3]= 'z';
	names[4]= 'a';
	for (int i =0; i<=4; i++)
	{
		//printf("%c\n", names[i]);	
	
		if (names[i] >= 'a' && names[i] <='z')
			{
				printf("%c\n", names[i]-32);
			
			}
		else 
			{
				printf("%c\n", names[i]-32);
			}	
	}
}
