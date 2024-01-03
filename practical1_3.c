#include<stdio.h>
#include<time.h>
void accept(int a[],int n)
{
	printf("\n%d element enter:",n);
	int i;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);	
	}
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int binary(int a[],int n,int key)
{
	int low,high,mid;
	low=0;
	high=n-1;
	while(low<high)
	{
		mid=(high+low)/2;
		if(a[mid]==key)
		{
			return 1;
		}
		if(a[mid]>key)
		{
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return -1;
}
void main()
{
	int a[20],n,key;
	printf("enter how many element you have store in array:\n");
	scanf("%d",&n);
	accept(a,n);
	printf("show array:\n");
	display(a,n);
	printf("\nenter ele to search in array:");
	scanf("%d",&key);
	int p=binary(a,n,key);
	if(p==1)
	{
		printf("\nElement is present in array");
	}
	else{
		printf("Element no present in array");
	}
}
