//program to prompt user to convert celcius to fahrenheit
#include<iostream>
using namespace std;
//function prototype
double convert(double);
int main()
{
float celcius, fahrenheit;
cout<<"\n Enter Temperature in Celsius : ";
cin>>celcius;
fahrenheit=convert(celcius);
cout<<"\n Temperature in Fahrenheit : "<<fahrenheit;
return 0;
}
//function definition
double convert(double celcius)
{
return(celcius * 9/5) + 32;
}