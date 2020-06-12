//
//  main.c
//  Exercise 1-19
//
//  Created by Yilun Yang on 6/10/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>
#define MAXLINE 1000

int getnxline(char line[], int maxline);
void reverse(char from[], char to[]);

int main(int argc, const char * argv[]) {
    printf("Input lines:\n");
    int len;
    char line[MAXLINE], reline[MAXLINE];
    while ((len = getnxline(line, MAXLINE)) > 0) {
        reverse(line, reline);
        printf("reversed: %s\n", reline);
    }
    return 0;
}

int getnxline(char s[], int lim)
{
    int c = 0, i;
    for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char from[], char to[])
{
    int i = 0, j = 0;
    while ((from[i] != '\0')) {
        ++i;
    }
    j = i - 1;
    i = 0;
    while ((from[i]) != '\0') {
        to[i] = from[j];
        ++i;
        --j;
    }
}
