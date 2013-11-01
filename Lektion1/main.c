#include <stdio.h>
#include <stdlib.h>

char myString[] = "hello world";

char* myStrcpy(char* dst, char* src)
{
	char* tmp = dst;
	while(*src != '\0'){
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return tmp;		
}

char* strInverter(char* src)
{
	char* tmp;
	
	
	
}
int main()
{
	char* myString2;
	myString2 = (char*) malloc(20*sizeof(char));
	myString2 = myStrcpy(myString2, myString);
	printf("myString:%s \n",myString);
	printf("myString2:%s \n",myString2);
	myString2 = strI
	printf("myString2:%s \n",myString2);
	return 0;
}
