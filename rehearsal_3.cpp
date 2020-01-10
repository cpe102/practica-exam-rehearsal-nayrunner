#include <iostream>
#include <math.h>
using namespace std;

float sumSqrt(float N)
{   float  result=1,x=2;
    if(N<=0){
        return 0;
    }
    else{
     while(x<N){
     	float root = sqrt(x);
         result = result + (1/root);
         x++ ;
     }
     return result;
    }
}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}