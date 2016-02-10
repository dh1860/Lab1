#include <stdio.h>

int main(void)
{
	int i, F,C;
	printf("Farhenheit\tCelsuis\n=========\t==========\n");
	for(i = 0; i < 310; i+=10)
	{
		F = i;
		C = (5*(F-32)/9);
		printf("%d \t\t %d \n",F ,C);

	}
	return 0;
		
}  