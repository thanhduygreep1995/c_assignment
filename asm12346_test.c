#include <stdio.h>
#include <math.h>

void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();

void chucNang7();
void chucNang8();
void chucNang9();
void chucNang10();

int main(){
	int luaChon;
	do{
	printf("\n=========================MENU==========================="
			"\n1.Kiem tra so nguyen\n"
			"\n2.Tim uoc chung va boi so chung 2 so\n"
			"\n3.Chuong trinh tinh tien cho quan Karaoke\n"
			"\n4.Tinh Tien Dien\n"
			"\n5.Chuc nang doi tien\n"
			"\n6.Chuc nang tinh lai suat vay ngan hang tra gop\n"
			"\n7.Chuc nang xay dung chuong trinh vay tien mua xe\n"
			"\n8.Chuc nang sap xep thong tin sinh vien\n"
			"\n9.Chuc nang game FPOLY-LOTT (2/15)\n"
			"\n10.Chuc nang xay dung chuong trinh tinh toan phan so\n"
			"\n11.Thoat\n");
	
	printf("\nvui long chon chuc nang tu 1 toi 11:  ");							
	scanf("%d", &luaChon);

			switch(luaChon){
				case 1: {printf("\n1.Kiem tra so nguyen\n");
					chucNang1();
					break;
				}
				case 2: {printf("\n2.Tim uoc chung va boi so chung 2 so\n");
					chucNang2();
					break;
				}
				case 3: {printf("\n3.Chuong trinh tinh tien cho quan Karaoke\n");
					chucNang3();
					break;
				}
				case 4: {printf("\n4.Tinh Tien Dien\n");
					chucNang4();
					break;
				}
				case 5:	{printf("\n5.Chuc nang doi tien\n");
					
					break;
				}
				case 6: {printf("\n6.Chuc nang tinh lai suat vay ngan hang tra gop\n");
					float tienVay, tienLai, goc, tienLaiThang, tienHangThang, tongTien;
					printf("\nSo tien muon vay: ");
					scanf("%f", &tienVay);
					tienLai = 0.05;
					goc = tienVay/12;
					int i;
					for(i=1;i<=12;i++){
						tienLaiThang = tienVay * tienLai;
						tienHangThang= goc + tienLaiThang;
						tongTien+=tienHangThang;
						tienVay= tienVay-goc;
					}
					printf("tong tien phai tra: %f", tongTien);
					break;
				}
				case 7: {printf("\n7.Chuc nang xay dung chuong trinh vay tien mua xe\n");
					
					break;
				}
				case 8: {printf("\n8.Chuc nang sap xep thong tin sinh vien\n");
					
					break;
				}
				case 9: {printf("\n9.Chuc nang game FPOLY-LOTT (2/15)\n");
					
					break;
				}
				case 10:{printf("\n10.Chuc nang xay dung chuong trinh tinh toan phan so\n");
					
					break;
				}
				case 11:{
					break;
				}
				default: printf("\nsai vui long nhap lai chuc nang\n");
				
			}								
			}while(luaChon!=11);
	return 0;
}
void chucNang1(){
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
						if (i*i>(int)x){printf("\nx khong phai la so chinh phuong\n",(int)x);}
}

void chucNang2(){
	int x, y, c;
	printf("\nnhap x: ");
	scanf("%d", &x);

	printf("\nnhap y: ");
	scanf("%d", &y);
	int i;
	int bc=x*y;

		for(i = 1; i <= x && i <= y; i++) {
   if( x%i == 0 && y%i == 0 )c=i;
   }
   printf("USCLN = %d", c);
   printf("\nBCLN = %d", bc/c);
}

void chucNang3(){
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
	
}

void chucNang4(){
	float soDien, tienDien;

 	int bac1=1678, bac2=1734, bac3=2014, bac4=2536, bac5=2834, bac6=2927;
 	
	printf("\nnhap san luong dien da dung:");
	scanf("%f", &soDien);
	
 	if(soDien>0 && soDien<51) {
 		printf("\nso tien dien can nop bac 1: %.2f",soDien*bac1);
 	}
 	
 	if(soDien>=51 && soDien<101) {
 		printf("\nso tien dien can nop bac 2: %.2f",soDien*bac2);
 	}
 	
 	if(soDien>=101 && soDien<201) {
		printf("\nso tien dien can nop bac 3: %.2f",soDien*bac3);
 	}
 	
 	if(soDien>=201 && soDien<301) {
 		printf("\nso tien dien can nop bac 4: %.2f",soDien*bac4);
 	}
 	
 	if(soDien>=301 && soDien<401) {
 		printf("\nso tien dien can nop bac 5: %.2f",soDien*bac5);
	} 
	 
	if (soDien > 400 ) {
		printf("\nso tien dien can nop bac 6: %.2f",soDien*bac6);
	} 
}


