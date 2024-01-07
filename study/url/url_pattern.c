#include <stdio.h>
#include <regex.h>

int main() {
    const char *type = "z[0-9]+\\.b2te\\.bid";

    regex_t regex;
    int reti = regcomp(&regex, type, REG_EXTENDED);
    char test_str[100];

    if (reti) {
        fprintf(stderr, "Couldn't compile regex\n");
        return -1;
    }

    printf("Compare String : %s\n", type);
    printf("Input Test URL : ");

    if (scanf("%99s", test_str) != 1) {
        fprintf(stderr, "Failed to read input\n");
        return -1;
    }

    reti = regexec(&regex, test_str, 0, NULL, 0);

    if (!reti) {
        printf("Match\n");
    } else if (reti == REG_NOMATCH) {
        printf("Not Match\n");
    } else {
        char error_message[100];
        regerror(reti, &regex, error_message, sizeof(error_message));
        fprintf(stderr, "Regex match failed : %s\n", error_message);
        return -1;
    }

    regfree(&regex);

    return 0;
}
