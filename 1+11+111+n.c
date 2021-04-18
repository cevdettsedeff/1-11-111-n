#include <stdio.h>
#include <stdlib.h>

void main()
	{
	int adet,i;
	int islem=0,j=1;
	
	
	printf("\n Kac adet terim toplanacak: ");
	scanf("%d",&adet);
	
	for(i=1;i<=adet;i++)
	{
		printf(" %d",j);
		
		if(i<adet)
		{
			printf(" +");
		}
	islem=islem+j;
	j=(j*10)+1;
	}
	
	printf("\n\n Sonuc= %d",islem);
	
	}


	
	

	
	
	
	
	
	
	
	
	


