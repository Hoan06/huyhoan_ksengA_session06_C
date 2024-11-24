#include <stdio.h>

int main (){
	
	int day , month;
	printf ("moi ban nhap ngay sinh ");
	scanf("%d",&day);
	printf ("moi ban nhap thang sinh ");
	scanf("%d",&month);
	
	if ((month==1 && day >= 20) || (month==2 && day <= 18)){
		printf ("ban thuoc cung bao binh");
	} else if ((month==2 && day>=19)|| (month==3 && day<=20)){
		printf ("ban thuoc cung song ngu");
	} else if ((month==3 && day>=21) || (month==4 && day<=20)){
		printf ("ban thuoc cung bach duong");
	} else if ((month==4 && day>=21) || (month==5 && day<=20)){
		printf ("ban thuoc cung kim nguu");
	} else if ((month==5 && day >=21) || (month==6 && day <=21)){
		printf ("ban thuoc cung song tu");
	} else if ((month==6 && day>=22) || (month==7 && day<=22)){
		printf ("ban thuoc cung cu giai");
	} else if ((month==7 && day>=23) || (month==8 && day<=22)){
		printf ("ban thuoc cung su tu");
	} else if ((month==8 && day>=23) || (month==9 && day<=22)){
		printf ("ban thuoc cung xu nu");
	} else if ((month==9 && day>=23) || (month==10 && day<=23)){
		printf ("ban thuoc cung thien binh");
	} else if ((month==10 && day>=24) || (month==11 && day<=22)){
		printf ("ban thuoc cung bo cap");
	} else if ((month==11 && day>=23) || (month==12 && day<=21)){
		printf ("ban thuoc cung nhan ma");
	} else if ((month==12 && day>=22) || (month==1 && day<=19)){
		printf ("ban thuoc cung ma ket");
	} else {
		printf("ngay thang sinh khong hop le");
	}
	
	
	return 0;
}
