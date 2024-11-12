#include<stdio.h>
int main()
{
	char ab[]="arshia";
	rev(ab,6);
}
int rev(char arr[], int a)
{
	if(a==0)
	{
		return 0;
	}
	printf("%c",arr[a-1]);
	rev(arr,a-1);
}