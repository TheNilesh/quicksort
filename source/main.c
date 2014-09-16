#include<stdio.h>

int main()
{
int i,j,n,temp;
int arr[7];
n=7;

for(i<0;i<n;i++)
	printf("%d  ", arr[i]);

printf("Sorting program");
for(i=0;i<n;i++)
	for(j=i;j<n-1;j++)
		if(arr[j]<arr[j+1])
		{
		 temp=arr[j];
		 arr[j]=arr[j+1];
		 arr[j+1]=temp;
		}

for(i<0;i<n;i++)
	printf("%d  ", arr[i]);
			
return 0;
}
