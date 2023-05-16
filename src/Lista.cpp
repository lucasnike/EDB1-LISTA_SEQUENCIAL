#include <iostream>
#include <Lista.hpp>
using namespace std;

Lista::Lista(int arraySize)
{
   array = new int[arraySize];
   capacity = arraySize;
}
int Lista::push_front(int valor)
{
   if (size < capacity)
   {
      int aux = array[0];
      for (int i = 0; i < size; i++)
      {
         int prev = array[i + 1];
         array[i + 1] = aux;
         aux = prev;
      }

      array[0] = valor;
      size++;
      return 1;
   }

   cout << "Lista cheia\n";
   return -1;
}
int Lista::push_back(int valor)
{
   if (size < capacity)
   {
      array[size] = valor;
      size++;
      return 1;
   }

   cout << "Lista cheia\n";
   return -1;
}
void Lista::at(int index)
{
   if (index <= size)
   {
      cout << array[index] << endl;
   }
}
void Lista::toString()
{
   for (int i = 0; i < size; i++)
   {
      this->at(i);
   }
}
int Lista::insert(int index, int valor)
{
   if (index > size - 1)
   {
      return -1;
   }
   
   if (size < capacity)
   {
      int aux = array[index];
      for (int i = index; i < size; i++)
      {
         int prev = array[i + 1];
         array[i + 1] = aux;
         aux = prev;
      }

      array[index] = valor;
      size++;
      return 1;
   }

   cout << "Lista cheia\n";
   return -1;
}
int pop_front()
{
}
int pop_back()
{
}
int removeAt()
{
}
int Lista::sizeOf()
{
   return size;
}
int clear()
{
}
int sort()
{
}
int reverse()
{
}
