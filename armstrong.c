//Armstrong number print
#include<stdio.h>

int main()
{
	//declaring valiables
	int n, og,s=0,r;
	printf("Enter the number\n"); //asking user to give the input
	scanf("%d",&n);//taking input from the user and forwarding it to the compiler
	og=n;    	
	while(n>0)
	{
		r=n%10; // we perform this step to find out the mod of the input value
		s=s+(r*r*r);
		n=n/10;
	}
	if(og==s)  //now we are comparing it with the og value.
	{
		printf("its an armstrong number",og);
		
	}
	else
	{
	printf("its not an armstrong number",og);
			
	}
	return 0;
}
