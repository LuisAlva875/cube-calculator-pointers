 #include <stdio.h>

int cubo(int *x);

main(){
	 
	 int n;
	 
	 printf("dame un valor para elevarlo al cubo");
	 scanf("%d",&n);
	 printf("el cubo de %d es %d",n,cubo(&n));
}

int cubo(int *x){
	
	return *x**x**x;
}


