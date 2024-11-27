#include <stdio.h>

int main (){
	
	double laiXuat,tongTienLai,tienNhan,tienGui;
	int soThang;
	
	printf("Moi ban nhap so tien gui ");
	scanf("%lf",&tienGui);
	
	printf("moi ban nhap lai xuat theo %");
	scanf("%lf",&laiXuat);
	
	printf("moi ban nhap so thang gui ");
	scanf("%d",&soThang);
	
	tienNhan=tienGui;
	
	for(int i=1;i<=soThang;i++){
		tienNhan+=(laiXuat*tienNhan)/100;
	}
	tongTienLai=tienNhan-tienGui;
	printf("so tien lai la %.2lf \n", tongTienLai);
	printf("tien nhan duoc sau %d thang la %.2f ", soThang,tienNhan);
	
	return 0;
}
