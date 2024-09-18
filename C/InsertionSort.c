#include <stdio.h>

// array arr[] of size n .
// Ex: {23,4,1,8,5} . 

void Insert(int arr[],int n) 
{

    for (int i = 1 ; i < n ; i++)
    {
        int key = arr[i];
        int j = i-1 ; 

        while (j>=0 && arr[j]>key) 
        {
            arr[j+1] = arr[j] ;
            arr[j] = key ; 
            j = j-1 ;
        }
    }

    for (int i = 0 ; i < n ; i++)
    {
        printf("%d" , arr[i]) ;
    }
    
}


int main () 
{
    int n = 5 ;
    int arr[] = {23,24,5,1,2} ;

    Insert(arr,n) ;
}