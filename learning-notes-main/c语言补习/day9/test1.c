/*===============================================
*   文件名称：test1.c
*   创 建 者：     
*   创建日期：2022年06月30日
*   描    述：
================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{ 
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *p[3] = {a[0], a[1], a[2]};
    int **pp;
    pp = p;
    printf("%d \n", **(pp+2));
    printf("%d \n", *(*pp+2));
    return 0;
} 
