#include<stdio.h>


void merge (int arr[],int first,int mid,int last)
{        
	int b[7];
	int j=0;
	int i;
	int lpt=first;
        int upt=mid+1;
        int  n=last-first+1;

        while(lpt<mid+1 && upt<last+1)
         {   if(arr[lpt]<arr[upt])
                {  b[j]=arr[lpt];
                   lpt=lpt+1;
                    j=j+1;
                }
               else
                 {  b[j]=arr[upt];
                     upt=upt+1;
                      j=j+1;             
                  }  
	}
          
        while(lpt<mid+1)
        {
		b[j]=arr[lpt];
                   lpt=lpt+1;
                    j=j+1;

	}

	while(upt<last+1)
	{	
		b[j]=arr[upt];
                upt=upt+1;
                j=j+1;     
    
        }
	
	
	
	
	
	

	lpt=first;
	for(i=0;i<n;i++)
	{
		arr[lpt]=b[i];
		lpt++;
	}	
}



void merge_sort (int arr[] ,int p,int r)
{      if(p==r)
         return;
     
	int q=(p+r)/2;
        merge_sort(arr,p,q);
	merge_sort(arr,q+1,r);
	merge(arr,p,q,r);
         
}




void main()
{
	int i,arr[5];
	printf("Enter the elements of the array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}	
	
	merge_sort(arr,0,4);

	printf("The sorted elements are : ");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);	
	}	
}



BMBROOOOOOOOOOO
