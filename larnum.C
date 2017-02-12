#include <stdio.h>

int main() {
	//code
	int n,temp,a[25],i,j;
	for(i=0;i<25;i++)
	scanf("%d",&a[i]);
	
	for(i=1;i<25;i++)
    if(a[0]<a[i])
	a[0]=a[i];
	printf("%d",a[0]);
	return 0;
}
