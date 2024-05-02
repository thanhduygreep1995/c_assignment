#include <stdio.h>
#include <math.h>

int main(){
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
		printf("\n%3d\t%.2f\t%.2f\t%.2f\t%.2f", i, tienLaiThang, tienHangThang, tongTien, tienVay);
		
	}
	printf("\ntong tien phai tra: %f", tongTien);
	
	
	
	
	
	
	
	return 0;
}
