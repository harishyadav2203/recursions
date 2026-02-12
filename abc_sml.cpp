#include<stdio.h>
int main()
{
	int a,b,c;
    printf(" enter the a,b,c values:/n");
    scanf("%d %d %d", &a, &b, &c);
    int big,med,small;
    if(a>b&&a>c)
    {
    	big=a;
    	if(b>c)
    	{
    		med=b;
    		small=c;
		}
		else
		{
			med=c;
			small=b;
		}
	}
	else if(b>a&&b<c)
	{
		big=b;
		if(a>c)
		{
			med=a;
			small=b;
		}
		else
		{
			med=b;
			small=a;
		}
	}
	if(big-med==med-small)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
	}

