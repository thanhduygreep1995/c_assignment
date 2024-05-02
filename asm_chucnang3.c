#include <stdio.h>
#include <math.h>

int main(){
	int gioBD, gioKT;
	float tienGio;
	printf("gio bat dau:  ");
	scanf("%d", &gioBD);
	
	printf("gio ket thuc:  ");
	scanf("%d", &gioKT);
	
	int bac1=150000, bac2= 150000*0.7, bac3=150000*0.9;
			if(gioBD<14){if(gioKT - gioBD<4){printf("tien can thanh toan %d", bac1 * (gioKT - gioBD));
						}else if(gioKT - gioBD>=4){printf("tien can thanh toan %d", bac2 *(gioKT - gioBD));
													}
			}
			if (gioBD>14){if ( gioKT - gioBD<4){printf("tien can thanh toan %d", bac3 *(gioKT - gioBD));
			} else if(gioKT - gioBD>=4){printf("tien can thanh toan %d", bac3 *(gioKT - gioBD)*bac2);
			}
			}
			
			
	return 0;
}
