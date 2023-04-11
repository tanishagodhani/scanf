#include<stdio.h>

main()

{
	int a,b,c;
	 printf("Enter value A=");
	 scanf("%d",&a);
	
	printf("Enter value B=");
	scanf("%d",&b);
	
 
c=a;
a=b;
b=c;
printf("swapping value of A=%d & B=%d ",a,b);

}

