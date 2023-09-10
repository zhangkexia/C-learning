// funds4.c -- 把结构数组传递给函数
#include <stdio.h>
#define FUNDLEN 50
#define N 2

struct funds{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(const struct funds money[], int n);

int main(void){
    struct funds jones[N] = {
        {
            "Gljljl",
            56.7,
            "ljljlgl",
            8999.5
        },
        {
            "jlLjljl",
            567.8,
            "jllDljl",
            999.5
        }
    };

    printf("The jons have a total of $%.2f.\n", sum(jones, N));

    return 0;
}

double sum(const struct funds money [], int n){
    double total;
    int i;

    for(i = 0, total = 0; i < n; i++){
        total += money[i].bankfund + money[i].savefund;
    }

    return total;
}