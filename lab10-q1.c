#include<stdio.h>
int printarr(int arr[], int size)
{
	if(size==0)
	{
		return;
	}
	else
	{
		printarr(arr,size-1);
	    printf("%d",arr[size-1]);
	    
	}
	
}
int main()
{
	int array[]={1,2,4,5,6,4,8,9};
	int a=(sizeof(array)/4);
	printarr(array,a);
}