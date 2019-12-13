#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Name		: SelectionSort
//Input		: int arr[],int
//Output	: void
//Desc		: Sorts the array Using Selection Sort
//Author	: Akshay Kamble
//Date		: 7/11/2019
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
SelectionSort(int *arr,int size)
{
        int j=0,i=0,temp=0,iMin=0;

        for(int i=0;i<size-1;i++)
        {
		iMin=i;
                for(j=i+1;j<size;j++)
			
		{
                        if(arr[j]<arr[iMin])
                        {
				iMin=j;

                               
			}
                }

		if(i!=iMin)
		{
			temp=arr[i];
			arr[i]=arr[iMin];
			arr[iMin]=temp;
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


//      BubbleSort(p,isize);
	SelectionSort(p,isize);

        printf("Sorted elements are");

        for(i=0;i<isize;i++)
        {
                printf("        %d",p[i]);
        }

        free(p);
}

     
