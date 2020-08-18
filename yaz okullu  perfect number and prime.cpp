#include<stdio.h>

int main() {
int L,U;
int prime=0;
int pftNumber=0;
int sum;
int count=0;

printf("Enter the lower and upper limits: ");
scanf("%d",&L);
scanf("%d",&U);


for(int i=L;i<=U;i++)
{   
count=0;
for(int j=1;j<=i;j++)
{

if(i%j==0)
{
count++;
}
}

if(count==2)
{
prime++;
}
}
  

for(int i=L;i<=U;i++)
{   
sum=0;
for(int j=1;j<i;j++)
{

if(i%j==0)
{
sum += j;
}
}

if(sum==i)
{
pftNumber++;
}
}
  
printf("\nPrime: %d",prime);
printf("\nPerfectNumbers: %d",pftNumber);
}


