#include <stdio.h>

int main()
{
	int number=0;
	int numberOfTrailingZeros=0;
	int dividingFactor=5;
	int result = 0;
    scanf("%d",&number);
    result=number/dividingFactor;
    while( result >= 1)
    {
    	numberOfTrailingZeros+=result;
    	dividingFactor*=5;
    	result=number/dividingFactor;
    	
    	
    }
    
    printf("%d",numberOfTrailingZeros);
    
}
