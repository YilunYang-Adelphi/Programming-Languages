//
//  main.c
//  Exercise 1-18
//
//  Created by Yilun Yang on 6/10/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>
#define MAXLINE 1000

int getnxline(char line[], int maxline);
void factory(char in[], char out[]);

int main(int argc, const char * argv[]) {
    int len;
    char line[MAXLINE];
    char output[MAXLINE];
    
    printf("Input lines:\n");
    while ((len = getnxline(line, MAXLINE)) > 0) {
        factory(line, output);
        printf("%s", output);
    }
    return 0;
}

int getnxline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c !='\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void factory(char in[], char out[])
{
    int i = 0;
    while (in[i] != '\0') {
        if((in[i] != in[i+1]) && (in[i] != ' ' && in[i+1] != ' '))
            out[i] = in[i];
        ++i;
    }
}
