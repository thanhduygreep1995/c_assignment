#include <stdio.h>
#include <math.h>

int main(){
	int gioBD, gioKT;
	int n=3; 
	float tienGio;
do{
	printf("\ngio bat dau:  ");
	scanf("%d", &gioBD);
	
		if(gioBD<12){
					printf("\nvui long nhap lai\nkhung gio nay (%d h) quan chua hoat dong\n", gioBD);
	}
	}while(gioBD<12);
do{	
	printf("\ngio ket thuc:  ");
	scanf("%d", &gioKT);
	
		if(gioKT>23){
					printf("\nvui long nhap lai\nkhung gio nay (%d h) quan dong cua\n", gioKT);
		}
		if(gioKT<gioBD){printf("\nvui long nhap lai\nkhung gio nay (%d h) nho hon gio bat dau\n", gioKT);
		}
	}while(gioKT>23 || gioKT<gioBD);
	
	int soGio= gioKT - gioBD;
	int bac1=150000, bac2= 150000*0.7, bac3=150000*0.9, bac4 = 150000*0.6;


if(gioBD<14){
			if(soGio<n){
						tienGio= bac1 * soGio;
						}
			else if (soGio>=n){
						tienGio= bac2 * soGio;}
			}
 else if(gioBD>=14){
 				if (soGio<n){
				 		tienGio= bac3 * soGio;
										} 
				else if(soGio>=n){
						tienGio= bac4 * soGio;
										}
				}
				printf("tien can thanh toan %f", tienGio);
				
	
	return 0;
}
