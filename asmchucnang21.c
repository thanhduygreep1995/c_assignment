#include <stdio.h>
#include <math.h>

int main(){
	int x, y, c;
	printf("\nnhap x: ");
	scanf("%d", &x);

	printf("\nnhap y: ");
	scanf("%d", &y);
		while(x!=y){
			if(x>y){x-=y;
			}else{y-=x;
			}
		}
		
		printf("%d",x);
	return 0;
}
