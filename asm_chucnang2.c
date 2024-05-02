#include <stdio.h>
#include <math.h>

int main(){
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
 /*int a,b,uc,bc;
    printf("Nhap (a,b): ");
    scanf("%d%d",&a,&b);
    for (uc=a;uc>=1;uc--){
        if (a%uc==0 && b%uc==0){
            printf("UCLN(%d,%d)=%d\n",a,b,uc);
            break;
        }
    }
    for (bc=a;bc<=a*b;bc++){
        if (bc%a==0 && bc%b==0){
            printf("BCNN(%d,%d)=%d\n",a,b,bc);
            break;
        }
    }
				*/
										
											
		
		
	return 0;
}
