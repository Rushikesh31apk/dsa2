#include<stdio.h>
#include<time.h>
void accept(int a[],int n)
{
	printf("\ngenrate %d elemnt in array:\n");
	srand(time(0));
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=rand()%20;
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
int selection(int a[],int n,int key)
{
	int i,temp;
	temp=a[n-1];
	a[n-1]=key;
	while(a[i]!=key)
	{
		i++;
	}
	a[n-1]=temp;
	if(i==n-1)
	{
		return -1;
	}
	return 1;
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
	int p=selection(a,n,key);
	if(p==1)
	{
		printf("\nElement is present in array");
	}
	else{
		printf("Element no present in array");
	}
}
