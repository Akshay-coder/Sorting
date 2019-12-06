#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
InsertionSort(int *arr,int size)
{
        int j=0,i=0,key=0,iMin=0;

        for(int i=1;i<size;i++)
        {
           key=arr[i];
	   j=i-1;

		   while((j>=0)&&(arr[j]>key))
		   {
			   arr[j+1]=arr[j];
			   j--;
		   }
	   arr[j+1]=key;



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
//       SelectionSort(p,isize);
	InsertionSort(p,isize);

        printf("Sorted elements are");

        for(i=0;i<isize;i++)
        {
                printf("        %d",p[i]);
        }

        free(p);
}



