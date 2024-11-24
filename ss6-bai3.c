#include <stdio.h>

int main (){
	
	int pass=1234 , answer;
	
	do {
		printf ("moi ban nhap mat khau ");
		scanf("%d", &answer);
	} while (answer!=pass);
	printf ("chinh xac");
	
	return 0;
}
