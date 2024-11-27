#include <stdio.h>

int main(){
	
	int answer,i;
	printf("moi ban nhap so nguyen ");
	scanf("%d",&answer);
	if (answer<0){
		answer=-answer;
	}
	printf ("cac uoc cua %d la ",answer);
	for (i=0;i<=answer;i++){
		if(answer%i==0){
			
			printf("%d",i);
		}
	}
	
	
	return 0;
}
