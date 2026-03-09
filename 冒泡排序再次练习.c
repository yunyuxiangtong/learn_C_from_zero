#include<stdio.h>
int main()
{
	int arr[10] = {1,3,6,5,2,4,8,9,7,0};
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
				
			}
			
		}
		
	}
	
	for(int a=0;a<10;a++)
	{
		
		printf("%d\t",arr[a]);
	}
	
	
	return 0;
}