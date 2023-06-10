#include <stdio.h>
#include<conio.h>


int main () {
	int n,row,col;
	printf("Enter the number of rows\n");
scanf("%d",&n);

for(row=n;row>=1;row--)
{
	for(col=n;col>row;col--)
	{
	printf(" ");
	}
	
	printf("*");
	
	for(col=1;col<(row-1)*2;col++)
	{
		printf(" ");
	}
if(row==1)
{printf("\n");
}
else
{printf("*\n");
}
}
//for lower body 
for(row=2;row<=n;row++)
{
	for(col=n;col>row;col--)
	{printf(" ");
	}
	printf("*");
	
	for(col=1;col<(row-1)*2;col++)
{printf(" ");
	}
printf("*\n");
}
		




    return 0;
}

