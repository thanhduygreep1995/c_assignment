#include <stdio.h>
#include <math.h>

int main(){
	float tienVay, tienLai, goc, tienLaiThang, tienHangThang, tongTien;
	printf("\nSo tien can tra: ");
	scanf("%f", &tienVay);
	float traTruoc=(tienVay/100)*20;
	printf("\n so tien tra truoc là 20 phan tram (%.2f)", traTruoc);
	tienLai = 0.072;
	float tienTraGop=tienVay-traTruoc;
	int year;
	int year12= 12;
	do{
	printf("\nTra gop trong bao nhieu nam: ");
	scanf("%d", &year);
	if(year>24 && year<=3){printf("\nTra Vui long nhap lai ky han tra gop theo quy dinh ngan hang\n");
	}
	}while(year>24 && year<=3);
	
	
	int kyHan= year*year12;
	goc = tienTraGop/kyHan;
	int i;
	for(i=1;i<=kyHan;i++){
		tienLaiThang = tienTraGop * tienLai;
		tienHangThang= goc + tienLaiThang;
		tongTien+=tienHangThang;
		tienTraGop= tienTraGop-goc;
		printf("\n%3d\t%.2f\t%.2f\t%.2f\t", i, tienLaiThang, tienHangThang, tongTien);
		if(tienTraGop>0){printf("%.2f", tienTraGop);
		}
	}
	printf("\ntong tien phai tra: %.2f", tongTien);
		
	return 0;
}
