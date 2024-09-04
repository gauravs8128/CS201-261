#include <iostream>
using namespace std;

int main () 
{ 
    int n = 5 ;
    int arr[] = { 1,7,3,8,-2};
    int arr2[5];

    for ( int i = 0 ; i < n ; i++)
    {
        int num ;

        for(int j = i ; j < n ; j ++ ) 
        {
            if (arr[j]>arr[i])
            {
                num = arr[j] ;
                goto point ;
            }
            else 
            {
                num = -1 ; 
            }
        }
        for ( int k = 0 ; k < i-1 ; k++ )
        {
            if (arr[k]>arr[i])
            {
                num = arr[k];
                goto point ;
            }
            else {
                num = -1 ;
            }
        }

        point :

        arr2[i] = num ; 
    }

    for ( int m = 0 ; m < n ; m++ )
    {
        cout << arr2[m] << endl ;
    }

}