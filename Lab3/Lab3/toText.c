#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.",

                 "--.", "....", "..", ".---", "-.-", ".-..",

                 "--", "-.", "---", ".--.", "--.-", ".-.",

                 "...", "-", "..-", "...-", ".--", "-..-",

                 "-.--", "--.."

                };
				
int sok( char *string)
{
	int i;
	for(i=0; i < 25; i++) {
		if(strcmp(string, morse[i]) == 0)
			return i;
	}
	return -1;
}
char fran_morse(char *string)
{
	int boksnr = sok(string);
	char boks = 'A'+boksnr;
	return boks;
}
int main()
{
	char input[100];
	char blank = 0;
	while(blank != '\n') {
		scanf("%s", input);
		printf("Test");
		printf("%c", fran_morse(input));
		blank = getchar();
		if(blank == '\t')
			printf("%c", ' ');
	}
}
