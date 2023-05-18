#include <iostream>
#include <stdlib.h>
using namespace std;

class Lista
{
private:
   int size = 0;
   int capacity;
   int* array;

public:
   Lista(int arraySize);
   int push_front(int valor);
   int push_back(int valor);
   int insert(int index, int valor);
   int pop_front();
   int pop_back();
   int removeAt(int index);
   int sizeOf();
   void clear();
   void sort();
   void reverse();
   void at(int index);
   void toString();
};