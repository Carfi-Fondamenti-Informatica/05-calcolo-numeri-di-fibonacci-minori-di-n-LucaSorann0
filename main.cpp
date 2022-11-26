#include <iostream>
using namespace std;

int fibonacci (int n){
int a = 0, b = 1, c = 0;
cout << a + b << endl; 
while ((a+b)<=n){
c = a + b;
cout << c << endl;
a = b;
b = c; 
}
return n;
}

int main() {
   int n=0;
cin >> n;
fibonacci(n);
   return 0;
}
