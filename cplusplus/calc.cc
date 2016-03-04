#include<iostream>
#include"calc.h"

using namespace std;

int main(int argc, char* argv[]){
int sum, a=2, b=4;

calculator calc;
sum = calc.add(a,b);
cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
return 0;
}
