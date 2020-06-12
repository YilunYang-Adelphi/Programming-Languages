//
//  main.c
//  Exercise 1-17
//
//  Created by Yilun Yang on 6/10/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>
#define MAXLINE 1000
#define MAX 5

int getnxline(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, const char * argv[]) {
    int len;
    char line[MAXLINE];
    
    while ((len = getnxline(line, MAXLINE)) > 0) {
        if (len > MAX) {
            printf("%s", line);
        }
        
    }
    return 0;
}

int getnxline(char s[], int lim)
{
    int c = 0, i;
    for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
