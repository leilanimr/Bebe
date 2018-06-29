#include <stdio.h>

char nextLetter (char letter){
	char newLetter;
	newLetter = letter + 1;

	return newLetter;
}

int main(int a) {

	char userInput;
	printf("PLease put a letter: ");
	scanf("%c", &userInput);

	char res = nextLetter(userInput);
	printf ("The next letter of %c is %c\n", userInput, res);

	return 0;
}



