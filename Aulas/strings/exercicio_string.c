#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int contem (char s[], char c) {
    int i;
    for (i = 0; s[i]!=0, i++) {
        if(s[i] == c) {
            return 1;
        }
    }
    return 0;

 }

