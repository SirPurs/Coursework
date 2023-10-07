// goal of this code is to calculate the number day of the year and take a boiling point of a substance and return the name of the substance

#include <stdio.h>

//function prototypes
int calculate_day_of_year(int month,int day,int year);
int leap_year(int year);
void print_substance(float celsius);
int within_x_percent(float ref,float x, float value);


int main()
{
// Problem 1
    
    int month, day, year;
    int n_days;
    printf("CALCULATE DAY OF YEAR\n");
    printf("Enter a date: ");
    scanf("%d %d %d", &month, &day, &year); // 12 31 2004
    n_days = calculate_day_of_year(month, day, year);
    printf("%d/%d/%d is day number %d  of the year %d\n",month, day, year, n_days, year);

    


// Problem 2
    int celsius;
    printf("FIND SUBSTANCE FOR BOILING POINT\n");
    printf("Enter a temperature: ");
    scanf("%d", &celsius);
    print_substance(celsius);
    
  

   system("pause");

   return(0);
}

// function definitions
int calculate_day_of_year(int month,int day,int year) // calculate days of year depending on leap year

//Good problem  to revisit later and validate user input. This program assumes user knows there are either 30,28/29,31 days a month. 

{  
    int n_days=day;
    if ( leap_year(year) == 0)
    
    {
        
        if (month >=2)
            n_days+=31;
        if (month>=3)
            n_days+=28;
        if (month>=4)
            n_days+=31;
        if (month>=5)
            n_days+=30;
        if (month>=6)
            n_days+=31;
        if (month>=7)
            n_days+=30;
        if (month>=8)
            n_days+=31;
        if (month>=9)
            n_days+=30;
        if (month>=10)
            n_days+=31;
        if (month>=11)
            n_days+=30;
        if (month>=12)
            n_days+=31;
    }
    
    else {
    
    if (month >=2)
        n_days+=31;
    if (month>=3)
        n_days+=29;
    if (month>=4)
        n_days+=31;
    if (month>=5)
        n_days+=30;
    if (month>=6)
        n_days+=31;
    if (month>=7)
        n_days+=30;
    if (month>=8)
        n_days+=31;
    if (month>=9)
        n_days+=30;
    if (month>=10)
        n_days+=31;
    if (month>=11)
        n_days+=30;
    if (month>=12)
        n_days+=31;
    }
return (n_days);
}


int leap_year(int year) // determine if year is a leap year
{
    int leap_year =  year % 4 == 0 &&  year % 100 != 0 || year % 400 == 0 ; // if year is divsable by 4 and not 100 or divisable by 400
    
}


void print_substance(float celsius) //prints  based on output of within x percent function
{
    
    if (within_x_percent(100, 5, celsius))
    
        printf("Substance is Water\n");
        
    
    else if (within_x_percent(357, 5, celsius))
    
        printf("Substance is Mercury\n");
    
    else if (within_x_percent(1187, 5, celsius))
    
        printf("Substance is Copper\n");
        
    
    else if (within_x_percent(2193, 5, celsius))
    
        printf("Substance is Silver\n");
        
    
    else if (within_x_percent(2660, 5, celsius))
    
        printf("Substance is Gold\n");
        
    else 
    
        printf("Substance is unknown\n");
    
}




int within_x_percent(float ref,float x, float value) // takes celsius value and muriplies by percentage and compares within a range
{
    //printf("%f\n", value);
     //printf("%lf, %lf\n", ref*(1+x/100), value);
     //printf("%d\n", abs(value - ref*(1+x/100)) < 1e-9);

        if (ref*(1-x/100)<= value && value <= ref*(1+x/100))
        {    return(1);
    
        }
        else 
        {   return(0);

        }
}





/* outputs

CALCULATE DAY OF YEAR
Enter a date: 10 10 1960
10/10/1960 is the 284th day of 1960
FIND SUBSTANCE FOR BOILING POINT
Enter a temperature: 2193
Substance is Silver
Press any key to continue . . .

CALCULATE DAY OF YEAR
Enter a date: 10 10 2001
10/10/2001 is the 283th day of 2001
FIND SUBSTANCE FOR BOILING POINT
Enter a temperature: 1188
Substance is Copper
Press any key to continue . . .

CALCULATE DAY OF YEAR
Enter a date: 10 10 1940
10/10/1940 is the 284th day of 1940
FIND SUBSTANCE FOR BOILING POINT
Enter a temperature: 3000
Substance is unknown
Press any key to continue . . .









*/




