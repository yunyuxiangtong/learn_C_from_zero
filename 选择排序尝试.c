#include<stdio.h>
int main()
{
	int arr[10]={1,3,6,5,2,4,8,9,7,0},min;
	for(int i=0;i<10;i++)
	{
		min=arr[i];
		for(int j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				min=arr[j];
				arr[j]=arr[i];
				arr[i]=min;
				
			}
			
		}
	}
	for(int h=0;h<10;h++)
	{
		printf("%d\n",arr[h]);
	}
	
	return 0;
}