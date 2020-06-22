//Swapping of 2 numbers
//To swap 2 numbers using pointer and function concept, 
//return value from user defined function and print the swapped values in main() function.

#include<stdio.h>
void swap(int *a, int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}
int main()
{
    int x,y,t;
    scanf("%d\n",&t);
    for(int i;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        swap(&x, &y);
        printf("%d %d\n",x,y);
    }
    return 0;
}