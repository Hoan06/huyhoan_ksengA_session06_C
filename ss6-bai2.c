#include<stdio.h>

int main(){
	int a , sl=0 , number , sc=0;
	
	for (a=1;a<=5;a++){
		printf ("moi ban nhap so thu %d ", a);
		scanf("%d", &number);
		
		if (number%2 !=0){
			sl++;
		} else {
			sc++;
		}
	}
	printf ("co %d so le \n", sl);
	printf ("co %d so chan ", sc);
	
	return 0;
}
