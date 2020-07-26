#include <stdio.h>
#define MAX 1000

int getNXline(char line[], int max);
int strrindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main() {
    printf("Input lines of text here.\n");
    char line[MAX];
    int found = 0, p = 0;
    while (getNXline(line, MAX) > 0)
        if ((p = strrindex(line, pattern)) >= 0)
        {
            printf("\n%s\nPosition: %d\n", line, p);
            found++;
        }
    printf("\nFound: %d\n", found);
    return found;
}

int getNXline(char s[], int lim)
{
    int c = 0, i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

int strrindex(char s[], char t[])
{
    int i, j, k, l, m[MAX], n = 0;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, l = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            m[n++] = l;
    }
    if (n > 1) {
        return m[n-1];
    }

    return -1;
}
