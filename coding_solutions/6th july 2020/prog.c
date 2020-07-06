//Write a program that prints the given numbers and for multiples of '3' print "Fizz" instead of //the number and for the multiples of '5' print "Buzz" and for both multiple of 3 and 5 print //"FizzBuzz" else print the number itself.

#include <stdio.h> 
int main() 
{ 
    int i,n;
    printf("input number: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++) 
    {  
        if (i%15 == 0)         
            printf ("FizzBuzz\n");     
        else if ((i%3) == 0)     
            printf("Fizz\n");                  
        else if ((i%5) == 0)                        
            printf("Buzz\n");                  
        else             
            printf("%d\n", i);                  
    } 
} 