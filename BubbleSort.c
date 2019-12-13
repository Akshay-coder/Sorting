#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


#include<malloc.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Name		: BubbleSort
//Input		: int arr[],int
//Output	: void
//Desc		: Sorts the array Using Bubble Sort
//Author	: Akshay Kamble
//Date		: 7/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BubbleSort(int *arr,int size)
{
	int pass=0,i=0,temp=0;

	for(pass=1;pass<size;pass++)
	{
		for(i=0;i<size-pass;i++)
		{
			if(arr[i]>arr[i+1])
			{

				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}

}

void BubbleSortX(int *arr,int iSize)
{
	int pass=0,i=0,flag=0,temp=0;

	for(pass=1;pass<iSize;pass++)
	{
		for(i=0;i<iSize-pass;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				flag=1;
			}

		}
		 if(flag==0)
                        {
                                break;
                        }

	}
}


int main()
{
	int *p=NULL;
	int isize=0,i=0;


	printf("Enter the No of elements to sort");
	scanf("%d",&isize);

	p=(int *)malloc(isize* sizeof(int));

	printf("Enter the elements");
	
	for(i=0;i<isize;i++)
	{
		scanf("%d",&p[i]);
	}


//	BubbleSort(p,isize);
	BubbleSortX(p,isize);

	printf("Sorted elements are");

	for(i=0;i<isize;i++)
	{
		printf("	%d",p[i]);
	}

	free(p);	
}
