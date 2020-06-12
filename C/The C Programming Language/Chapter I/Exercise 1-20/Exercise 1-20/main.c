//
//  main.c
//  Exercise 1-20
//
//  Created by Yilun Yang on 6/12/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char lingest[MAXLINE];

int getnxline(void);
void copy(void);

int main(int argc, const char * argv[])
{
    int len;
    extern int max;
    extern char longest[];
    
    max = 0;
    
    printf("Input lines: \n");

    while ((len = getnxline()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }
    
    if (max > 0) {
        printf("%s", longest);
    }
    
    return 0;
}

int getnxline(void)
{
    int c = 0, i;
    extern char line[];
    
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    
    line[i] = '\0';
    
    return i;
}

void copy(void)
{
    int i;
    extern char line[], longest[];
    
    i = 0;
    
    while ((longest[i] = line[i]) != '\0') {
        ++i;
    }
}
