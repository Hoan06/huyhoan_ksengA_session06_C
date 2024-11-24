#include<stdio.h>

int main(){
	int a , sum=0 , number;
	
	for (a=1;a<=5;a++){
		printf ("moi ban nhap so thu %d ", a);
		scanf("%d", &number);
		
		if (number%2 !=0){
			sum+=number;
		}
	}
	printf ("tong cac so le la %d", sum);
	
	return 0;
}
