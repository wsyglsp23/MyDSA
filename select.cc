#include<stdio.h>
#include<iostream>
#include<algorithm>
/*
    选择排序
    双重循环遍历数组，
    每经过一轮比较，找到最小元素的下标，将其交换至首位。

*/

void swap(int*arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}

void solution(int*arr,int size)
{
    int minidex = 0;
    for (int i = 0; i < size - 1; i++)
    {
        minidex = i;
        for( int j = i + 1; j < size; j++)
        {
            if(arr[minidex] > arr[j])
            {
                minidex = j;
            }
        }
        swap(arr,minidex,i);
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
