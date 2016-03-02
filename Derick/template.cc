
#include<iostream>
#include"template.h"

using namespace std;


int main(int argc, char* argv[])
{
int  sum, a=2, b=4;
float fSum, floata=2.3 ,floatb=4.3;
calculator<int> calc;
sum = calc.add(a,b);
cout<<" The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
calculator<float> fcalc;
fSum =fcalc.add(floata, floatb);
cout<<" The sum of "<<floata<<" and "<<floatb<<" is "<<fSum<<endl;
cout<<endl;
return 0;
}
