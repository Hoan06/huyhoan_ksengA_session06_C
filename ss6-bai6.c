#include <stdio.h>

int main(){
	int i;
	
	for (i=0;i<=100;i++){
		
		if (i%3==0){
			printf ("fizz\n");
		} else if(i%5==0){
			printf ("buzz\n");
		} else if (i%33==0 || i%55==0){
			printf("fizzbuzz\n");
		} else {
			printf("%d\n",i);
		}
}
	
	return 0;
}
