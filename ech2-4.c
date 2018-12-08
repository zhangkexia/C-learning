#include <stdio.h>
void praise_message(void);
void last_line(void);

int main (void)
{
    praise_message();
    praise_message();
    praise_message();
    last_line();
    return 0;
}

void praise_message(void)
{
    printf ("For he's a jolly good fellow!\n");
}

void last_line(void)
{
    printf ("Which nobody can deny!\n");
}
