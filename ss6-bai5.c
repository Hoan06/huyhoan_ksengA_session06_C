#include <stdio.h>

int main (){
	
	float answer , giaCuoc = 25000 ;
	
	printf ("nhap so phut ban su dung ");
	scanf("%f",&answer);
	
	if (answer>0 && answer<=50){
		giaCuoc = giaCuoc + answer*600;
	} else if ( answer >50 && answer <=150){
		giaCuoc= giaCuoc + (50*600) + (answer-50)*400;
	} else if (answer>150 && answer<=200){
		giaCuoc= giaCuoc + (50*600) + (150*400)+ (answer-200)*200;	
	} else if (answer <=0){
		printf ("phut khong hop le");
	} else {
		giaCuoc = giaCuoc + (50*600) + (150*400) + (200*200) + (answer-400)*100;
	}
		
	printf ("so tien ban can tra cho %.2f la %.2f", answer , giaCuoc);
	
	return 0;
}
