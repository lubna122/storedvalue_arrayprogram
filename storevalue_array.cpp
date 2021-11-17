#include<stdio.h>
int main()
{
	int a[3]={1,2,3};
	int b[3]={4,5,6};
	int c[6];
	int z=0,i;
	for(i=0;i<6;i++)
	{
		if(z==3)
		{
			z=0;
		}
	    if(i<3)
	    {
	    	c[i]=a[z];
	    	z++;
	    }

	    else if (i>=3)
	    {
	    	c[i]=b[z];
	    	z++;
	    }
        
}
	for(i=0;i<=6;i++)
{

printf("%d",c[i]);	
}
}
	

	

