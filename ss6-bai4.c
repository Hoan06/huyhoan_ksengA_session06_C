#include<stdio.h>

int main(){
	
    float a , b ,c , delta , x , x1, x2;
    printf ("moi ban nhap he so a ");
    scanf("%f", &a);
    printf ("moi ban nhap he so b ");
    scanf("%f", &b);
    printf ("moi ban nhap he so c ");
    scanf("%f", &c);
    
    if (a==0){
    	if (b==0){
    		if (c==0){
    			printf ("vo so nghiem ");
			}
		} else if (b!=0){
			x=-c/b;
			printf ("co 1 nghiem la %.2f", x);
		} else if (c!=0){
			printf ("vo nghiem ");
		}
	} else {
		delta = b*b-4*a*c;
		if (delta==0){
			x= -b/2*a;
			printf ("co 1 nghiem kep la %.2f", x);
		} else if (delta >0){
			x1=(-b-sqrt(delta))/2*a;
			x2=(-b+sqrt(delta))/2*a;
			printf ("phuong trinh co 2 nghiem la %.2f va %.2f ", x1 , x2);
		} else {
			printf ("vo nghiem ");
		}
	}
    
	
	return 0;
}
