#include <stdio.h>

int main(void) {
	int i,second=1,first=0,next,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    if(i<=1)
	    next=i;
	    else
	    {
	        next=first+second;
	        first=second;
	        second=next;
	    }
	    printf("%d\n",next);
	}
	return 0;
}

