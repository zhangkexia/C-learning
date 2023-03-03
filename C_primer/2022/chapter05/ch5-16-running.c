// running.c -- A useful program for runners
#include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;

int main(void)
{
    double distk, distm; //距离
    double rate; //平均速率
    int min, sec;//跑步时间
    int time;//跑步时间
    double mtime;//1英里需要的时间
    int mmin, msec;//1英里需要的时间

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometers, the distance run.\n");
    scanf("%lf", &distk);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d", &min);
    printf("Now enter the seconds.\n");
    scanf("%d", &sec);

    time = S_PER_M * min + sec;//时间转换成秒
    distm = M_PER_K * distk;//公里转换英里
    rate = distm / time * S_PER_H;
    mtime = (double) time / distm;
    mmin = (int) mtime / S_PER_M;
    msec = (int) mtime % S_PER_M;

    printf("You ran  %1.2f km (%1.2f miles) in %d min, %d sec.\n",
            distk, distm, min, sec);
    printf("That pace corresponds to running a mile in %d min,",
            mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.\n", msec,
            rate);
    
    return 0;
}