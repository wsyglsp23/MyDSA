#include<stdio.h>
#include<iostream>
#include<algorithm>
/*
    冒泡算法

*/

void swap(int*arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}

void solution(int*arr,int size)
{
    bool swapped = false;
    for (int i = 0; i < size -1; i++)
    {
        swapped = false;
        for( int j =0 ; j < size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr,j,j+1);
                swapped = true;
            }
        }
        if(!swapped) break;
    };
}

int main()
{
    int arr[] {3,4,2,5,10,3};   
    solution(arr,6);
    for(auto it:arr)
    {
        std::cout << it << std::endl;
    }
    return 0;
}
