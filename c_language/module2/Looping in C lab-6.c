#include<stdio.h>
main(){
	
	int i=1;
	while(i<=10){
		printf("\n i=%d",i);
		i++;
	}
	for(i=1;i<=10;i++){
		printf("\n i=%d",i);
	}
	i=1;
	do{
		printf("\n i=%d",i);
		i++;
	}while(i<=10);
}

