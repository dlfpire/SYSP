#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp = fopen("a.txt", "r");
	char buf[30];
	fseek(fp, SEEK_SET);
	fread(buf, sizeof(char),15, 4, fp);
	printf("%s\n", buf);
	fclose(fp);
	return 0;
}
