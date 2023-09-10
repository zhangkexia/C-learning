// complit.c -- 复合字面量
#include <stdio.h>
#define MAXTITL 14
#define MAXAUTL 31

struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void){
    struct book readfirst;
    int score;

    printf("Enter test score: ");
    scanf("%d", &score);

    if(score >= 84){
        readfirst = (struct book) {"Crimet",
                                    "Fyodor Dostoy",
                                    11.25};
    }else{
        readfirst = (struct book) {"Mr. Bounc",
                                    "Fred Winsome",
                                    5.99};
    }

    printf("Your assigned reading:\n");
    printf("%s by %s: $%.2f\n", readfirst.title,
            readfirst.author, readfirst.value);

    return 0;
}