/**
 * Author: Jeremy Yu <ccpalettes@gmail.com>
 *
 * Solution for Exercise 1-20, Chapter1.
 */

#include <stdio.h>
#define MAX 1000

int getnxline(char line[], int maxline);
void detab(char in[], char out[]);

int main(void)
{
    int c;
    char line[MAX], output[MAX];
    printf("Input lines here: \n");
    while ((c = getnxline(line, MAX)) > 0) {
        detab(line, output);
        printf("%s\n", output);
    }
    
    return 0;
}

int getnxline(char s[], int lim)
{
    int c = 0, i = 0;
    
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void detab(char from[], char to[])
{
    int i = 0,j = 0;
    
    while (from[i] != '\0') {
        if (from[i] == '\t') {
            for (int k = j; k < j+3; k++) {
                to[k] = ' ';
            }
            j = j + 3;
            i++;
        }
        else if (from[i] != '\t') {
            to[j] = from[i];
                       ++i;
                       ++j;
        }
    }
}

