#include<iostream>
#include "tempcalc.h"
using namespace std;
int main(int argc, char*argv[]){
float sum ,a=2.3, b=4.2;
calculator<float> calc;
sum = calc.add(a,b);
cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
return 0;
}
