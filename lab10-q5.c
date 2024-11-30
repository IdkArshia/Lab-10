#include<stdio.h>
int bubblesort(int arr[], int size)
{
	int temp;
	if(size<=1)
	{ 
	   printf("%d ",arr[size-1]);
	   return;
	}
	for(int i=0;i<size-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			temp=arr[i];
		    arr[i]=arr[i+1];
		    arr[i+1]=temp;
	    }
	    
	}
	bubblesort(arr,size-1);
	printf("%d ",arr[size-1]);
	
	
}
int main()
{
	int arr[]={5,6,35,2,15,12,1};
	int a=(sizeof(arr)/sizeof(arr[0]));
	//printf("%d",a);
	bubblesort(arr,a);
	
}