#include <stdio.h>

int main() {
// 	int n,sum;
// 	scanf("%d",&n);
// 	sum=(n*(n+1))/2;
// 	if(sum==0)
// 	{
// 	    printf("1");
// 	}
// 	else{
// 	printf("%d",sum);
// 	}
// 	return(0);
// ----------------------------------------------
int n,sum;
scanf("%d",&n);
if(n==0)
{
    printf("1");
    
}
else
{
    sum=(n*(n+1))/2;
    printf("%d",sum);
}
return(0);
}
