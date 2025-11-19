#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10], b[10], c[20], n,i,p, sum[10], sum1[10], temp, chk[10], chks[20], chkr[20],carry=0;

printf("\n Checksum Program with 2 segments");
printf("\n At Senders side");
printf("\n enter the number of bits: ");
scanf("%d", &n);
printf("\n enter the 1st segment: ");
for(i=n-1; i>=0; i--)
{
scanf("%d", &a[i]);
}
printf("\n enter the 2nd segment: ");
for(i=n-1; i>=0; i--)
{
scanf("%d", &b[i]);
}
for(i=0; i<n; i++)
{
sum[i]=(a[i]+b[i]+carry)%2;
carry=(a[i]+b[i]+carry)/2;
}

printf("\n sum: ");
for(i=n-1; i>=0; i--)
{
printf("%d", sum[i]);
}

if(carry == 1)
{
for(i=n-1; i>=0; i--)
{
p=(sum[i] + carry)%2;
carry=(sum[i] + carry)/2;
}
}
printf("\n Wrapped sum:");
for(i=n-1; i>=0; i--)
{
chk[i]=sum[i];
printf("%d", sum[i]);
}

printf("\n Checksum: ");
for(i=n-1; i>=0; i--)
{
if(chk[i] ==1)
chks[i]=0;
else
chks[i]=1;
printf("%d", chks[i]);
}

printf("\n At Receivers Side \n");
carry=0;
printf("\n Enter the received bits \n");
for(i=n-1; i>=0; i--)
{
scanf("%d", &a[i]);
}
 for(i=n-1; i>=0; i--)
{
scanf("%d", &b[i]);
}

printf("\n the next bits will be identified as checksum: \n");
for(i=n-1; i>=0; i--)
{
scanf("%d", &c[i]);
}

for(i=0; i<n; i++)
{
sum1[i]= (a[i]+b[i]+c[i]+carry)%2;
carry=(a[i]+b[i]+c[i]+carry)/2;
}

printf("\n Sum: \n");
for(i=n-1; i>=0; i--)
{
printf("%d", sum1[i]);
}

if(carry ==1)
{
for(i=n-1; i>=0; i--)
{
p=(sum1[i]+carry)%2;
carry=(sum1[i]+carry)/2;
sum1[i]=p;
}
}
printf("\n wrapped sum: \n");
for(i=n-1; i>=0; i--)
{
chkr[i]=sum1[i];
printf("%d", sum1[i]);
}

printf("\n checksum: \n");
temp=0; 
for(i=n-1; i>=0; i--)
{
if(chkr[i]==1)
temp++;
}

if(temp==0)
printf("Checksum Passed");
else
printf("Checksum failed");

}


