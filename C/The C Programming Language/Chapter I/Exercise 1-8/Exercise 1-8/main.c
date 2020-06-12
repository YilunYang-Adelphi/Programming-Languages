//
//  main.c
//  Exercise 1-8
//
//  Created by Yilun Yang on 6/6/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int c, blanks = 0, tabs = 0, newlines = 0;

    while ((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            blanks++;
        }
        else if (c == '\t')
        {
            tabs++;
        }
        else if (c == '\n')
        {
            newlines++;
        }
    }

    printf("\nBlanks:%d\nTabs:%d\nNewlines:%d\n", blanks, tabs, newlines);
    
    return 0;
}
