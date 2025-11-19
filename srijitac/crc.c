#include<stdio.h>
int main()
{
int m[20], p[20], d[10], r[10], m1[20], r1[10], i,j,k,l,n;

printf("\n Enter the length od the divisor: ");
scanf("%d", &n);

printf("\n Enter the divisor: ");
for(i=0; i<n; i++)
{
scanf("%d", &d[i]);
}

printf("\n Enter the length of the data: ");
scanf("%d", &l);

printf("\n Enter the data: ");
for(i=0; i<l; i++)
{
scanf("%d", &m[i]);
p[i]=m[i];
}
for(i=0; i<l+(n-1);i++)
{
m[i]=0;
}
for(i=0; i<l+(n-1);i++)
{
printf("%d", m[i]);
}

for(i=0; i<l; i++)
{
if(m[i]==1)
{
for (j=0; j<n; j++)
{
if(m[i+j]==d[j])
r[j]=0; 
else
r[j]=1;
}
for(k=0; k<n; k++)
{
m[i+k]=r[k];
}
}
else
{
for(k=0; k<n; k++)
{
r[k]=m[i+k];
}
}
}
printf("\n CRC: ");
for(i=1;i<n;i++)
{
printf("%d", r[i]);
}
printf("\n At Receiver's side");
printf("\n The complete data + the received data: ");
for(i=0; i<l+(n-1); i++)
{
scanf("%d", &m1[i]);
}
for(i=0; i<l; i++)
{
if(m1[i]==1)
{
for(j=0; j<n; j++)
{
if(m1[i+j]==d[j])
r1[j]=0;
else
r1[j]=1;
}
for(k=0;k<n;k++)
{
m1[i+k]=r1[k];
}
}
else
{
for(k=0;k<n;k++)
{
r1[k]=m[i+k];
}
}
}
printf("\n CRC: ");
j=0;
for(i=0;i<n;i++)
{
printf("%d", r1[i]);
j+=r1[i];
}
if(j==0)
printf("\n There is no error. ");
else
printf("\n There is error. ");
}