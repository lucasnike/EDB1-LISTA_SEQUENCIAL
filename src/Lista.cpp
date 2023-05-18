#include <iostream>
#include <Lista.hpp>
#include <cmath>
using namespace std;

Lista::Lista(int arraySize)
{
   arraySize > 0 ? arraySize = arraySize : arraySize = 1;
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

int Lista::pop_front()
{
   if (size > 0)
   {
      for (int i = 0; i < size - 1; i++)
      {
         array[i] = array[i + 1];
      }
      array[size - 1] = 0;
      size--;
      return 1;
   }

   return -1;
}
int Lista::pop_back()
{
   if (size > 0)
   {
      array[size - 1] = 0;
      size--;
      return 1;
   }

   return -1;
}
// int removeAt()
// {
// }
int Lista::sizeOf()
{
   return size;
}
void Lista::clear()
{
   for (int i = 0; i < size; i++)
   {
      array[i] = 0;
   }
   size = 0;
}
void Lista::sort()
{
   for (int i = 0; i < size - 1; i++)
   {
      for (int j = 0; j < size - i - 1; j++)
      {
         if (array[j] > array[j + 1])
         {
            int aux = array[j];
            array[j] = array[j + 1];
            array[j + 1] = aux;
         }  
      }
   }
}
void Lista::reverse()
{
   int loop = round((float)size / 2);
   for (int i = 0; i < loop; i++)
   {
      int aux = array[i];
      array[i] = array[size - 1 - i];
      array[size - 1 - i] = aux;
   }
}
