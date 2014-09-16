#include<stdio.h>

int main()
{
int i,j,n,temp;
int arr[7];
n=7;
printf("enter array");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);

printf("Sorting program");
for(i=0;i<n;i++)
	for(j=0;j<n-i-1;j++)
		if(arr[j]>arr[j+1])
		{
		 temp=arr[j];
		 arr[j]=arr[j+1];
		 arr[j+1]=temp;
		}

printf("Sorted Array = ");
for(i=0;i<n;i++)
	printf("%5d",arr[i]);
			
return 0;
}
