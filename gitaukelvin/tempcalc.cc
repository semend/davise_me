#include<iostream>
#include"tempcalc.h"

using namespace std;

int main(int argc, char* argv[]){
double sum, a=2.2, b=4.5;
calculator<float> calc;
sum = calc.add(a,b);
cout<<" The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
return 0;
}
