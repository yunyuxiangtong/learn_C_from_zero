#include<stdio.h>

int main()
{
	int AAA = 0;
	
	while (1 )
	{
		scanf("%d",&AAA);

		if (AAA == 66)
		{
			printf("you get it");
			break;
		}
		
		printf("please enter again\r\n");
		
	}
	
	return 0;
}

