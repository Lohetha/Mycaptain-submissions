#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int mark;
	//85 - 100 -> Grade A 70 - 84 -> Grade B 55 - 69 -> Grade C 40 - 54 -> Grade D Below 40 -> Grade F
	printf("Enter marks:");
	scanf("%d",&mark);
	if(mark >=85 && mark<=100)
	printf("Grade A");
	else if(mark >=70 && mark<=84)
	printf("Grade B");
	else if(mark >=55 && mark<=69)
	printf("Grade C");
	else if(mark >=40 && mark<=54)
	printf("Grade D");
	else
	printf("Grade F");
}
