// Array in c .2
#include <stdio.h>
int main (){
	int a[5];
	int i;

	for(i=0; i<5; i++ ){
		a[i] = i+100;

	}
	for(i=0; i<5; i++){
		printf("\t%d",a[i]);
	}
	return 0;
}