#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"

int main()
{
	FILE *fp=fopen("test.txt","w+");
	int arraySize=3;
	int n[arraySize];
	char c[arraySize];
	unsigned char hexBase=0x41;
	int randMax=49;
	
	srand((unsigned)time(NULL));
	for(int i=0; i<arraySize ; i++)
	{
		n[i]=rand()%randMax+1;
		c[i]=hexBase;
		printf("%c : %d\r\n", c[i], n[i]);
		fprintf(fp, "%c : %d\r\n", c[i], n[i]);
		hexBase++;
	}

	fclose(fp);
	getchar();
	return 0;
		
}
