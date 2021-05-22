#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, t, sum=0;
    scanf("%d",&t);
    for (i=0; i<t; i++) {
        int n[t];
        scanf("%d",&n[i]);
        sum +=n[i];
    }
    printf("%d\n",sum);
    return 0;
}