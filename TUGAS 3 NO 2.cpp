#include<stdio.h>

int main() 
{
    int celcius;
	float fahrenheit, reamur; 
	
	printf("100\n");
	printf("\n");
	printf("100 celcius :");
	scanf("%i", &celcius);
	
	fahrenheit = (celcius * 9/5) + 32;
	reamur = celcius*4/5;
	
	printf("Fahrenheit =%1f F\n", fahrenheit);
	printf("reamur = %.i1f R\nreamur\n", reamur);
	
	return 0;
}
