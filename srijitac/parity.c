#include<stdio.h>
int main()
{
int a[32], i,n, c=0;
char ch;

printf("\n enter e for even and o for odd parity scheme: ");
ch = getchar();

printf("\n enter the number of bits: ");
scanf("%d", &n);

printf("\n enter the binary data: ");
for(i=0; i<n; i++)
{
scanf("%d", &a[i]);
}

printf("\n original data: ");
for(i=0; i<n; i++)
{
printf("%d", a[i]);
if(a[i] == 1)
c++;
}

if(ch == 'e')
{
if( c % 2 == 0)
a[n]=0;
else
a[n]=1;
printf("\n encoded data for even parity: ");
for (i=0; i<=n; i++)
{
printf("%d", a[i]);
}
}

else if(ch == 'o')
{
if( c % 2 == 0)
a[n]=1;
else
a[n]=0;
printf("\n encoded data for odd parity: ");
for (i=0; i<=n; i++)
{
printf("%d", a[i]);
}
}
return 0;
}