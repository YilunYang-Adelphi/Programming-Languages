//
//  main.c
//  Exercise 3-2
//
//  Created by Yilun Yang on 7/9/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

void escape(char s[], char t[]);

int main(int argc, const char * argv[]) {
    char s[100] ="aBc\tdEFG\nhIjk\tLmN\nopQRsTu\nvWxyZ";
    char t[100];
    escape(s, t);
    printf("s: %s\n",s);
    printf("t: %s\n",t);
    return 0;
}

void escape(char s[], char t[])
{
    int j = 0;
    for (int i = 0; s[i] > 0 ; i++) {
        switch (s[i]) {
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            default:
                t[j++] = s[i];
                break;
        }
    }
}
