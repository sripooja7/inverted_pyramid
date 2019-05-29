/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,n,c=1;
    printf("Enter a value\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=1;k<=c;k++)
        printf(" ");
        c++;
        for(j=1;j<=2*(n-i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}
