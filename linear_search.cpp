#include<iostream>
using namespace std;

int linear_search(int arr[] ,int x, int y)
{
    int i;
    for(i=0;i<x;i++)
        if (arr[i]==y)
          return i;
    return -1;
    
}

int main(void)
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int y= 7;
    int x= sizeof(arr)/sizeof(arr[0]);
    

    int result = linear_search(arr, x, y);
    (result == -1)
       ? cout << "Element is not present in array"
       : cout << "Element is present at index " << result;
    return 0;
}

