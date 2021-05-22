#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long int li;
    char ch;
    float f;
    double d;
    
    scanf("%d %ld %c %f %lf",&i, &li, &ch, &f, &d);
    printf("%d\n%ld\n%c\n%f\n%lf\n",i,li,ch,f,d);
    
    return 0;
}