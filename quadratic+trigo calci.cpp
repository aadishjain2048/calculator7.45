
#include <iostream>
#include <cmath>
using namespace std;
const double Pi = 3.14159265;

unsigned long long  factorial(double x)
{
    int i, fact = 1;
    for(int i=1; i<=x; i++)
    {
        fact *= i;
    }
    return fact;
}

double Power(double base, double power)
{
    double result=1;
    while(power != 0)
    {
        result *= base;
        power--;
    }
    return result;
}


int main()
{


   double angle_in_degree;
   cout<<" Enter the Angle in degrees: ";
   cin>>angle_in_degree;
   double angle_in_radian = (angle_in_degree)*(Pi/180);
   cout<<"Angle in Radian measure is: " << angle_in_radian << endl;



   double a, b, c;
   double sinx = 0;
   for(int i=0; i<15; i++)
   {
       a = Power(-1, i);
       b = Power(angle_in_radian, (2*i)+1);
       c = factorial((2*i)+1);
       sinx += (a*b)/c;
   }
   cout <<"Sin(x) = "<< sinx << endl;




   double a2, b2, c2;
   double cosx = 0;
   for(int i=0; i<15; i++)
   {
       a2 = Power(-1, i);
       b2 = Power(angle_in_radian, (2*i));
       c2 = factorial((2*i));
       cosx += (a2*b2)/c2;
   }
   cout <<"Cos(x) = "<<cosx<<endl;




  long double tanx = sinx/cosx;
   cout << "Tan(x) = " << tanx << endl;

   int num1,num2;
    char operation;

    cout << "enter your first number here" << endl;
    cin >> num1;
    cout << "enter your operation" << endl;
    cin >> operation;
    cout << "enter your second number here" << endl;
    cin >> num2;

    int result;
    if(operation =='+'){result = num1+num2;}
    else if(operation == '-'){result = num1-num2;}
    else if(operation == '*'){result = num1*num2;}
    else if(operation == '/'){result = num1/num2;}
    else{cout << "invalid";}

    cout << result;



    cout<<"  px^2+qx+r "<<endl;
cout<<"enter the values of p,q and r"<<endl;

 int p;
 int q;
 int r;
 cout<<"enter p "<<endl;
 cin>>p;
 cout<<"enter q "<<endl;
 cin>>q;
 cout<<"enter r"<<endl;
 cin>>r;

double numerator1 = -1*q;
double denominator1 = 2*p;
double numerator2 = sqrt(q*q-4*p*r);
double denominator2 = 2*p;

if(numerator2 < 0){cout <<"invalid input"<<endl;}
else{
double function1 = numerator1/denominator1;
double function2 = numerator2/denominator2;
double function3 = function1 + function2;
cout<<function3;
}


return 0;






}
