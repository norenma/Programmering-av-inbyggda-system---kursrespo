#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* morse[] = {".-", "-...", "-.-.", "-..", "..-.", "--.", "....", "..",
                 ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "..-", ".--", "-..-", "-.--", "--.."
                };

int sok( char *string)
{
	for(int i=0; i < sizeof(morse); i++) {
		if(strcmp(string, morse[i]))
			return i;
	}
	return -1;
}

int main(){
	printf("this is: %d", sok("-..") );
}
