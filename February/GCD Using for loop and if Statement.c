//GCD Using for loop and if Statement
//written by Ayan Roy

#include<stdio.h>

int main(){
	
	int num1,num2,i,gcd;
	
	printf("Enter two integers: ");
	scanf("%d%d",&num1, &num2);
	
	for(i=1;i<=num1 && i<=num2; i++ )
	{
		if(num1%i == 0 && num2%i == 0 )
		gcd=i;
	}
	printf("G.C.D of %d and %d is %d",num1, num2, gcd);
	
	return  0;
	
}
