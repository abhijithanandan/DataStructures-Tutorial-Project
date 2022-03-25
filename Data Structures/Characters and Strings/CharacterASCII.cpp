#include "CharacterASCII.h"

#include <stdio.h>

CharacterASCII::CharacterASCII() {

}

CharacterASCII::~CharacterASCII() {

}

void CharacterASCII::Run() {
	char var;
	int no, i;
	scanf_s("%d", &no); fflush(stdin);
	i = 0;
	do {
		scanf_s("%c", &var, 1*sizeof(char)); fflush(stdin);
		i++;
		printf("\n ASCII of %c is %d \n", var, var);
		if (var >= 'A' && var <= 'Z')
			printf("Lower case if %c = %c \n", var, var + ('a' - 'A'));
	} while (i < no);
}
