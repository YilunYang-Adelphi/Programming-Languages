//
//  main.c
//  Exercise 3-1
//
//  Created by Yilun Yang on 7/7/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(int argc, const char * argv[]) {
    int s[18] = {1,3,4,5,8,10,14,16,18,21,35,36,44,56,76,77,78,99};
    printf("The sorted set: s[] = {");
    int i = 0;
    while (s[i] >= 0) {
        printf("%d ", s[i]);
        i++;
    }
    printf("}\n");
    printf("Searching 14...\n");
    printf("14 is at position of %d in s.\n", binsearch(14, s, i));
    return 0;
}

int binsearch(int x, int v[], int n)
{
    int high, low, mid;
    high = n - 1;
    low = 0;
    while (low < high) {
        mid = (high+low) / 2;
        if (x <= v[mid] ) {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return (x == v[low]) ? low : -1;
}
