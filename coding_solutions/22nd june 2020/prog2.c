//Write a C Program to print number of set bits
//Given a positive integer n, count the total number of set bits in binary representation of all numbers from 1 to n.

#include<stdio.h>
int countsetbits(int x); 
int bitcount(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
        count +=countsetbits(i);
    return count;
}
int countsetbits(int x)
{
    if(x<=0)
        return 0;
    return (x%2==0 ? 0 : 1)+countsetbits(x/2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",bitcount(n));
    return 0;
}
