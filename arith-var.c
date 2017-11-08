#include <stdio.h>

int main()
{
	/*integer variables of c and f*/
	int fahr, cel;		
	/*integer varables for looping*/
	int lower, upper, step;	
 
	/*starting point*/
	lower = 0; 	
	/*ending point*/
	upper = 300;		
	/*increasing by 20*/
	step = 20;

	fahr = lower;	

	/*while loop will keep repeating until the 
	condition is not met, in this case, 
	as long as fahr is less than or equal
	to the upper bound*/	
	while(fahr <= upper){
		/*arithmetic operation to conver
		fahrenhiet to celsius*/
		cel = 5*(fahr -32)/9;
		/*the way to display a variables value
		is by using the %d for decimal, all varibales
		display property will vary. \t is to tab*/
		printf("%d\t%d\n", fahr, cel);
		/*will increase fahr by the step value*/
		fahr= fahr + step;
	}
}
