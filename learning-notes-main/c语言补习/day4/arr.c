/*===============================================
*   文件名称：arr.c
*   创 建 者：     
*   创建日期：2022年06月23日
*   描    述：
================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{ 
    int arr[5] = {1,2,3,4,5};
    //arr[10] = 100;  //err,越界
    arr[5] = 4;

    int n = 4;
    int a[n]; //OK
    //int a[n] = {1,2,3,4}; //err
    a[0] = 1;
    a[1] = 2;
    return 0;
} 
