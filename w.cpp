#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int countingValleys(int n, char* s) {
   long long int i=0,p=0;
    int c=0 ,f=0;
    if(s[i]=='U')
    { p++;}
    else
    {
        p--;
        f=1;
    }
    i=1;
    while(s[i]!='\0')
    {
        if(s[i]=='U')
        {    p++;
         if(p>0)
             f=0;
         i++;
         if(p==0 && f==1)
             c++;
        }
        else
            
        {
            p--;
            if(p<0)
             f=1;
        i++;
        }
    }
    return c;
    // Complete this function
}

int main() {
    int n; 
    scanf("%i", &n);
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result = countingValleys(n, s);
    printf("%d\n", result);
    return 0;
}

