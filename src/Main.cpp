#include <iostream>
#include <Lista.hpp>

using namespace std;

int main()
{
   Lista a(100);

   a.push_back(2);
   a.push_back(87);

   a.toString();

   a.insert(2, 65);
   cout << "\n\n--------------------\n\n";
   a.toString();

   return 0;
}