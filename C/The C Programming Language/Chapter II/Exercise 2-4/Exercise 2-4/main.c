//
//  main.c
//  Exercise 2-4
//
//  Created by Yilun Yang on 6/30/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>
#define MAX 100
void squeeze(char s[], char t[]);

int main(int argc, const char * argv[]) {
    char s[MAX], t[MAX], c;
    
    printf("Input a char set here:\n");
    int i = 0;
    while ((c = getchar()) != '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    
    printf("Input another char set here:\n");
    i = 0;
    while ((c = getchar()) != '\n') {
        t[i++] = c;
    }
    t[i] = '\0';
    
    printf("The first char set is:\n%s\n",s);
    printf("The second char set is:\n%s\n",t);
    squeeze(s, t);
    printf("squeeze:\n%s\n",s);
    return 0;
}

void squeeze(char s[], char t[])
{
    int i = 0, j = 0, k = 0;
    while (s[i] != '\0') {
        j = 0;
        int flag = 0;
        while (t[j] != '\0') {
            if (s[i] == t[j]) {
                flag = 1;
            }
            j++;
        }
        if (flag == 0) {
            s[k++] = s[i];
        }
        i++;
    }
    s[k] = '\0';
}
