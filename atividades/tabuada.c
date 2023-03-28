#include <stdio.h>

int main()
{
	int num;
	num = 0;

	printf("digite um numero: ");
	scanf("%i", &num);

	for (int count = 0; count != 11; count++)
	{
		printf("%i x %i = %i \n",num,count,num * count);
	}
	
	return 0;
}
