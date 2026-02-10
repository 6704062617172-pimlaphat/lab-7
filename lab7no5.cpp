#include <stdio.h>

long convert(long h, long m, long s); 

int main(){
	long h,m,s;
	long minutes;
	
	scanf("%ld %ld %ld",&h,&m,&s);
	minutes = convert(h,m,s);
	
	printf("%ld\n",minutes);
	
	return 0;
}

long convert(long h, long m, long s){
	long minutes;
	minutes = (h * 3600) + (m * 60) +s;
}
