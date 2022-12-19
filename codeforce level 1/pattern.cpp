#include <bits/stdc++.h>

using namespace std;



class Example {

public:

void fun(int x) const {
 cout << "Const. version called \n"; }

void fun(double x) {
 cout << "Normal version called \n"; }

};



int main()

{

Example e;

e.fun(5.67);


	
return 0;

}