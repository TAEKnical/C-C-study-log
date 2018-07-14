#include <stdio.h>
#include <string.h>

int main(void){
	
	char filename[100];
	char s[100];
	int i;

	for(i=0;i<6;i++){
		strcpy(filename,"image"); // char filename[100] = "image";
		sprintf(s,"%d",i); // char s[100] = 0;
		strcat(filename,s); //char filename[100] = "image0,1,2,3,....";
		strcat(filename,".jpg");//char filename[100] = "image0.jpg";
		printf("%s \n", filename);
	}

	return 0;
}