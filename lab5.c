// joe boylan cis 1057 lab 5
#include <stdio.h>


// Prototypes

int DigitSum(int num);
int divide_by_nine(int num);
int show_result(int num);

double pi_formula (int n);


// main
int main ()
{
    
//Problem 1
    int num;
    printf("IS IT DIVISIBLE BY 9\n");
    printf("Enter an integer:");
    scanf("%i",&num);
    divide_by_nine(num);
    show_result(num);

        
    
    




// Problem 2
    
    int n;
    printf("ESTIMATE PI\n");
    printf("Enter number of iterations:");
    scanf("%i",&n);
    pi_formula(n);
    printf( "Estimated PI is : %f\n", pi_formula(n));





system("pause");
}
// functions
int DigitSum(int num) // calculate sum of entered number

{
    

     int sum=0;   
    do
    {
     sum += num%10;
     num /= 10;

    } while (num>0);
    return sum;
    
    
    

    
    
}
 int divide_by_nine( int num) //divide sum of digits by nine
{   
    int sum = DigitSum(num);
     return  (sum % 9== 0) ? 1 : 0;
        
            
        
}

int show_result( int num) // run divide function and then print result
{    
    
    if (divide_by_nine(num))

    {
    printf("%i is divisible by 9\n",num);

    }

    else printf("%i is NOT divisible by 9\n",num);
    

}



double pi_formula(int n)
{

    double pi=0;
    
    for (int i = 0; i < n; i++) // loop goes for amount of user input times
        
    {
         if ( i % 2 == 0 )
         {
             pi += 1.0 / ( 2 * i + 1 );
         }
         else
         {
             pi -= 1.0 / ( 2 * i + 1 );
         }  
     }

     return 4 * pi;
 
}



// put put tests

/*

IS IT DIVISIBLE BY 9
Enter an integer:154368
154368 is divisible by 9
ESTIMATE PI
Enter number of iterations:99
Estimated PI is : 3.151693
Press any key to continue . . .




IS IT DIVISIBLE BY 9
Enter an integer:123456
123456 is NOT divisible by 9
ESTIMATE PI
Enter number of iterations:9999
Estimated PI is : 3.141693
Press any key to continue . . .






*/