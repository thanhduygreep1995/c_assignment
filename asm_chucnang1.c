#include <stdio.h>
#include <math.h>

int main(){
	
	float x;
	int bienDem=0;
	printf("nhap so nguyen:  ");
	scanf("%f",&x);
			if (x-(int)x == 0) {printf("\nso nguyen");}
			else {printf("khong phai so nguyen");}
					int i=2;
					
					while(i<(int)x){
						if((int)x%i==0){
							bienDem++;//so x chia 2 
									}
									i++;
										}
					if(bienDem==0 && 1<(int)x){printf("\nx la so nguyen to");
										}
					else if(bienDem>=0) {printf("\nx khong phai so nguyen to");
										}		
					 i=1;
	  				while(i<=(int)x){
								if(i*i == x){
								printf("\nx la so chinh phuong",(int)x);
								break;
								}i++;
							}
						if (i*i>(int)x){printf("\nx khong phai la so chinh phuong",(int)x);}
	return 0;
}
