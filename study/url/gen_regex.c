#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_URL_SIZE 20

char* gen_regex(char *input);

int main()
{
	char input[MAX_URL_SIZE];
	char *regex;

	printf("Input pattern (ex : z$.b2te.bid) : ");

	fgets(input, sizeof(input), stdin);

	input[strcspn(input, "\n")] = 0;

	regex = gen_regex(input);

	printf("GEN REG EX : %s\n", regex);

	free(regex);
	return 0;
}

char *gen_regex(char *input)
{
	int len = strlen(input);
	char *regex = (char *) malloc((len + 10) * sizeof(char));
	int i, j = 0;

	if (regex == NULL) {
		perror("Mem Alloc Failed");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < len; i++) {
		if (input[i] == '$') {
			regex[j++] = '[';
			regex[j++] = '0';
			regex[j++] = '-';
			regex[j++] = '9';
			regex[j++] = ']';
		} else {
			regex[j++] = input[i];
		}
	}

	regex[j] = '\0';

	return regex;
}
