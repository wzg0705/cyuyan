#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
int arr[10]={0};
int sz=0;
sz=sizeof(arr)/sizeof(arr[0]);
printf("sz=%d",sz);
return 0;
}
