#include<stdio.h>
#include <conio.h>
#include<math.h> //We include this to use logarithm base to 10
int main()
{
    int half_life=5730; //half life of a carbon-14 (c-14) atom
    float time;
    float carbon_lost_percent;
    float carbon_lost; //this variable is to convert the percent to number because we need it in the formula
    printf("How much carbon has been lost (0-100%)? ");
    scanf("%f",&carbon_lost_percent);
    if (carbon_lost_percent >=0 && carbon_lost_percent<100)
    {
        carbon_lost=carbon_lost_percent/100; //Converting the percent to number
        time = ( log10(1-carbon_lost) * half_life )/log10(2); // This Formula is devired from Mt = k2t/h
        time *=-1; 
        printf("The object is %f years old.",time);
    }
    else
    {
        printf("Sorry You Have Entered Wrong input!!!");
    }
    getch();
    return 0;
}