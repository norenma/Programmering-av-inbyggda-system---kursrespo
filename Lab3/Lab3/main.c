#include <stdio.h>
#include <stdlib.h>
char* morse[] = {".-", "-...", "-.-.", "-..", "..-.", "--.", "....", "..",
                 ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "..-", ".--", "-..-", "-.--", "--.."
                };

int bokst_nr(char c)
{
	int nbr = -1;
	if(((int)c >= 'A') && ((int)c <= 'Z')) {
		nbr = (int)c - 'A';
	} else if(((int)c >= 'a') && ((int)c <= 'z')) {
		nbr = (int)c - 'a';
	}
	return nbr;
}
char *till_morse(char c)
{
	int nbr = bokst_nr(c);
	if(c == ' ') {
		return "	";
	}
	if(nbr==-1) {
		return "";
	} else {
		return morse[nbr];
	}

}
int main()
{
	char input[50];
	char* asMorse[50];
	fgets(input, 50, stdin);
	int i=0;
	while(input[i] != '\n') {
		asMorse[i] = till_morse(input[i]);
		i++;
	}
	asMorse[i] = '\0';
	i = 0;
	while(asMorse[i] != '\0') {
		printf(" %s", asMorse[i]);
		i++;
	}

}
