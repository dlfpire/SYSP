#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReadAndPrint(const char *fname);
int main(void)
{
	char fname[200];
	char buffer[256];
	printf("파일 이름: ");
	scanf("%s",fname);				 
	ReadAndPrint(fname);
	return 0;
}
int Distinction(char ch);
void ReadAndPrint(const char *fname)
{
	FILE *fp;
	char buf[4096];
	int line=0;
	fp = fopen(fname,"r");

	if(fp == NULL) {
		perror("파일 열기 실패");
		exit(0);
													    }		 
		while(!feof(fp)) {
			line++;
			fgets(buf,sizeof(buf),fp);								       
			if(line ==3 ) break;
			else if(line == 2) {
				printf("%s 라인 : 2\n ", strtok(buf, "option: "));
			}
		}
							 
		fclose(fp);
		printf("전체 라인 수:%d\n",line);
}
