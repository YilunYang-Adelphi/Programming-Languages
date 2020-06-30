//
//  main.c
//  Exercise 2-3
//
//  Created by Yilun Yang on 6/28/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>
#define MAX 10
int Hex2Dec(char hex[]);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Input a hexadecimal number.\n");
    
    int c, i = 0;
    char hex[MAX];
    
    while ((c = getchar()) != EOF) {
        hex[i] = c;
        i++;
        
    }
    
    printf("\nDecimal number:%d\n", Hex2Dec(hex));
    
    return 0;
}

int Hex2Dec(char hex[])
{
    int sum = 0;
    
    for (int i = 0; i < MAX; i++) {
        if (hex[i] > 0) {
            int c = 0;
            if (hex[i] >= '0' && hex[i] <= '9') {
                c = hex[i] - '0';
                sum = sum + c;
                sum = sum * 16;
            }
            else if (hex[i] >= 'a' && hex[i] <= 'f')
            {
                c = hex[i] - 'a' + 10;
                sum = sum + c;
            }
            else if (hex[i] >= 'A' && hex[i] <= 'F')
            {
                c = hex[i] - 'A' + 10;
                sum = sum + c;
            }
        }
    }
    
    return sum;
}
