#include<stdio.h>



int main(void)
{
	int i;    
    FILE *fp=fopen("test.txt","w");

	for(i=0 ; i<13 ;i++){
		fprintf(fp,"%d ",i);
	}

	fclose(fp);
	return 0;
}
		
    

    



