#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int sum(int x, int y)
{
    return x+y;	
}

int sub(int x, int y)
{
	return x-y;
}

int mul(int x, int y)
{
	return x*y;
}

int divide(int x, int y)
{
	return x/y;
}

	
int main(int argc, char *argv[]) {
	

	
	int x, y;
	char op;
	int (*pf)(int,int);
	
	printf("input the calculation : \n");
    scanf("%d %c %d",&x,&op,&y);
    
    switch(op)
    {
    	case'+':
    		pf=sum;
    		break;
    		
    	case'-':
    		pf=sub;
    		break;
    		
    	case'*':
    		pf=mul;
    		break;
    		
    	case'/':
    		pf=divide;
    		break;
    		
	}
     printf("result: %i\n", pf(x,y));
	

	return 0;
}
