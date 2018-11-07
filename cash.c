#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
    float change;
    int totalcent;
    int q = 25;
    int d = 10;
    int n = 5;
    int p = 1;
    int count;

    do{
        printf("The amount of change owe:$");
        change = get_float();
    }
    while (change < 0);

    totalcent =(int) round (change * 100);

    count = 0;
    while (q <= totalcent){
        count += totalcent / q;
        totalcent %= q;
    }
    while (d <= totalcent){
        count += totalcent / d;
        totalcent %= d;
    }
    while (n <= totalcent){
        count += totalcent / n;
        totalcent %= n;
    }
    while (p <= totalcent){
        count += totalcent / p;
        totalcent %= p;
    }
    printf("%i coins given as change.", count);

    return 0;
}