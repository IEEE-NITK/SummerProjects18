#include<stdio.h>
int call_me_1(int a){
	printf("%d\n",a);
	return a+1;
}
int call_me_2(int a){
	return a;

}



void main(){
	int n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	i=0;
	goto A;
B:	call_me_1(i);
	i++;
A:	if(i<n)
		goto B;
	printf("Output %d\n", call_me_2(n));


}
