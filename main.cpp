// Fig. 21.14: Fig21_14.cpp
// Template Stack class test program.
#include <iostream>
using std::endl;

#include "Stackcomposition.h"  // Stack class definition

int main()
{
   int x;
   Stack< int > s; // create Stack of ints

   for (int i = 10; i < 17; i++)
       s.push(i);

   s.printStack();
   s.pop(x);
   s.pop(x);
   s.push(20);
   s.push(30);
   s.push(40);
   s.pop(x);

   cout << "Stack is: ";
   s.printStack();


   cout << '\n';

}
