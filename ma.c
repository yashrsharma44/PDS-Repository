#include<stdio.h>
int main()
{
	int i=12,j,last;
	while(i>1){
		j=1;
		printf("%d: ",i);

		while(j<i){

			if((i%j)==0){
				printf("%d ",j);
				last = j;
			}
			j++;
		}
		i=last;
		printf("\n");
	}
}