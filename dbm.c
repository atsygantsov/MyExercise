/* Simple function converting Watt to dBm */
#include <stdio.h>
#include <cstdlib>
#include <math.h>

double dbm(double x);

double watt, answer;


int main()
{
printf("Enter an power value in Watt:\t");
scanf("%lf", &watt);


answer = dbm(watt);
printf("\nThe  %2.2f  Watt is %3.3f dbm.\n", watt, answer);


system("pause");


return 0;
}

double dbm(double x)
/*P(dBm) = 10 · log10( 1000 · P(W) / 1W) = 10 · log10( P(W) / 1W) + 30*/
{
   double result;

    result  = 10*log10(1000*x);



   return result;



}
