#include <stdio.h>

int main(void)
{
	char s1[] = "100 200 300";
	char s2[30];
	int value;

	sscanf(s1, "%d",&value); //문자열 s1에서 %d 형식으로 읽은 값을 value에 저장
	printf("%d\n", value);
	sprintf(s2,"%d",value); //value에 저장된 값을 문자열로 변환하여 s2에 저장
	printf("%s\n",s2);

	
	return 0;
}