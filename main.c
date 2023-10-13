#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int num){
	int res = 1;
	int i;
	for (i = 1; i <= num; i++){
		res=res*i;
	}
	return res;
}

int combination(int n, int r){
	int div1, div2;
	
	div1 = factorial(n);
	div2 = factorial(n-r)*factorial(r);
	                  
	return div1/div2;
}


int main(int argc, char *argv[]) {
	int n, r;
	
	printf("input n : ");
	scanf("%d", &n);
	
	printf("input r : ");
	scanf("%d", &r);
	
	if (n >= 0 && r >=0 && n >= r){
		printf("combination result : %i\n", combination(n,r));
	}
	
	return 0;
}
