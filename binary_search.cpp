//reccursive_binary_algorithm is used
/*
here, x is the lower element and 
y is the higher element or the last element
*/

#include<iostream>
using namespace std;
int binary_search(int arr[],int x , int y,int z)
{
    while (x<y){
       int mid= (x+y)/2;
       if (arr[mid]==z)
        return mid;
    
        if (arr[mid]<z)
        return binary_search(arr,mid+1,y,z);

        if(arr[mid]>z)
        return binary_search(arr,x,mid-1,z);
    }
    return -1;
};
int main(void){

    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;

}