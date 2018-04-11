#include<stdio.h>
int main()
{
	int a[] = {6,2,3,8};
	int i,j;

	for(i=0;i<4;i++){
		printf("%d: ", a[i]);

		for(j=0;j<4;j++){

			if((a[i] % a[j]) == 0) {
				printf("%d ", a[j]);
				continue;
			}
			if((a[j] % a[i])==0){
				printf("%d ",a[j]);
				break;
			}
		}
		printf("\n");
	}
}