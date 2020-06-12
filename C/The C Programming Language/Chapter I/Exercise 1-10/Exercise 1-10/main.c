//
//  main.c
//  Exercise 1-10
//
//  Created by Yilun Yang on 6/6/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int c;

       while ( (c = getchar()) != EOF)
       {
           if (c == '\t')
           {
               putchar('\\');
               putchar('t');
           }
           else if (c == ' ')
           {
               putchar('\\');
               putchar('\b');
           }
           else if (c == '\\')
           {
               putchar('\\');
               putchar('\\');
           }
           else
           {
               putchar(c);
           }
       }
    
    return 0;
}
