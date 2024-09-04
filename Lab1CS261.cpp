#include <iostream>
using namespace std;

void Pairs( int arr[] , int sum , int n )
{
    for ( int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            if (arr[i]+arr[j]==sum)
            {
                if (i!=j)
                {
                    cout << "Pair is:" << "{" << arr[i] << "," << arr[j] << "}" ;
                }
            }
        }
    }
}

int main () 
{ 
    int arr[]={-2,-1,2,3,1,0,4} ;
    int sum = 3;
    int n = 7 ;

    Pairs(arr,sum,n) ;
}