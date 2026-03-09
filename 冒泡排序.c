#include<stdio.h>

int main()
{
	SetConsoleOutputCP(65001);
	printf("请输入五个数:\r\n");
	int num[5] = {0,0,0,0,0};
	for(int g = 0;g<5;g++)
	{
		scanf("%d",&num[g]);
	}
	{
		for(int i = 0;i < 5;i++)
		{
			for(int j = 0;j<5-i-1;j++)
			{
				if (num[j]<num[j+1])
				{
					int temp = num[j];
					num[j] = num[j+1];
					num[j+1] = temp;         
				}	
			}
		}	
	}
	for(int h = 0;h<5;h++)
	{
		printf("%d",num[h]);
	}
	
	return 0;
}