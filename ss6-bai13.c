#include<stdio.h>
    int main(){
    	
    int ngay,thang;
    printf("Nhap vao ngay ");
    scanf("%d",&ngay);
    printf("Nhap vao thang ");
    scanf("%d",&thang);   
	if (thang>12||thang<0){
		printf(" khong hop le\n");
	} else if (ngay>31||ngay<1){
		printf(" khong hop le\n");
	} else if (thang==2){
		if (ngay > 28 ){
			printf(" khong hop le\n");
		}
	} else if (thang==4||thang==6||thang==9||thang==11) {
		if(ngay==31){
			printf(" khong hop le\n");
		}
	}
	if ((ngay>=21&&thang==3)||(ngay<21&&thang==4)){
		printf("  cung bach duong");
	} else if ((ngay>=21&&thang==4)||(ngay<21&&thang==5)){
		printf("  cung kim nguu");
	}else if ((ngay>=21&&thang==5)||(ngay<22&&thang==6)){
		printf("  cung song tu");
	}else if ((ngay>=22&&thang==6)||(ngay<23&&thang==7)){
		printf("  cung cu giai");
	}else if ((ngay>=23&&thang==7)||(ngay<23&&thang==8)){
		printf("  cung su tu");
	}else if ((ngay>=23&&thang==8)||(ngay<23&&thang==9)){
		printf("  cung xu nu");
	}else if ((ngay>=23&&thang==9)||(ngay<24&&thang==10)){
		printf(" cung thien binh");
	}else if ((ngay>=24&&thang==10)||(ngay<23&&thang==11)){
		printf("  cung bo cap");
	}else if ((ngay>=23&&thang==11)||(ngay<22&&thang==12)){
		printf("  cung nhan ma");
	}else if ((ngay>=22&&thang==12)||(ngay<20&&thang==1)){
		printf("  cung ma ket");
	}else if ((ngay>=20&&thang==1)||(ngay<19&&thang==2)){
		printf("  cung bao binh");
	}else if ((ngay>=19&&thang==2)||(ngay<21&&thang==3)){
		printf("  cung kim nguu");
	}
    return 0;	
} 
