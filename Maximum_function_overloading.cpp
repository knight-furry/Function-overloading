#include<iostream>
using namespace std;

class Data
{
  public:
  int maximum(int , int);
  int maximum(int *, int);
  void maximum(int *, int, int);
  int minimum( int , int);
  int minimum( int *, int);
  void minimum(int *, int, int);
};

int Data :: maximum(int m, int n)
{
  if(m > n)
    return m;
  return n;
}

int Data :: maximum(int *a, int arraylength)
{
  int i, max = a[0];
  for(i = 0; i < arraylength; i++)
  {
    if(a[i] > max)
      max = a[i];
  }
  return max;
}

void Data :: maximum(int *a, int arrarylength, int n)
{
  int i;
  cout<< "\nThe Result is:\n";
  for(i = 0; i < arrarylength; i++)
  {
    if(a[i] > n)
    {
      cout<< a[i]<< "\t";
    }
  }
  cout<< "\nThank you...!\n\n";
}

int Data :: minimum(int m, int n)
{
  if(m < n)
    return m;
  return n;
}

int Data :: minimum(int *a, int arraylength)
{
  int i, min = a[0];
  for(i = 0; i < arraylength; i++)
  {
    if(a[i] < min)
    {
      min = a[i];
    }
  }
  return min;
}

void Data :: minimum(int *a, int arrarylength, int n)
{
  int i;
  cout<< "\nThe Result is:\n";
  for(i = 0; i < arrarylength; i++)
  {
    if(a[i] < n)
    {
      cout<< a[i]<< "\t";
    }
  }
  cout<< "\nThank you...!\n\n";
}

int main()
{
  int choice, m, n, min, max;
  int arr[20];
  Data d;
  do
  {
    cout<< "\n========================Welcome to Overloading concept ===============================\n";
    cout<< "\n1. Get maximum number between two numbers\n2. Get maximum number from an array\n3. Get maximum numbers from a limit number\n";
    cout<< "\n4. Get minimum number between two numbers\n5. Get minimum number from an array\n6. Get minimum numbers from a limit number\n";
    cout<< "0. For Exit....!\n";
    cout<< "Please enter your choice: ";
    cin>> choice;
    switch(choice)
    {
      case 1:
        cout<< "Enter two numbers :\n";
        cin>> m>> n;
        max = d.maximum(m, n);
        cout<< "The maximum number is: "<< max<< "\n";
        break;
      case 2:
        cout<< "Enter the size of array :";
        cin>> n;
        for(int i = 0;i < n; i++)
        {
          cout<< "Enter data: ";
          cin>> arr[i];
        }
        max = d.maximum(arr, n);
        cout<< "The maximum number from array is: "<< max<< "\n";
        break;
      case 3:
        cout<< "Enter the size of array :";
        cin>> n;
        for(int i = 0;i < n; i++)
        {
          cout<< "Enter data: ";
          cin>> arr[i];
        }
        cout<< "\nNow enter the limit value: ";
        cin>> m;
        d.maximum(arr, n, m);
        break;
      case 4:
        cout<< "Enter two numbers :\n";
        cin>> m>> n;
        min = d.minimum(m, n);
        cout<< "The minimum number is: "<< min<< "\n";
        break;
      case 5:
        cout<< "Enter the size of array :";
        cin>> n;
        for(int i = 0;i < n; i++)
        {
          cout<< "Enter data: ";
          cin>> arr[i];
        }
        min = d.minimum(arr, n);
        cout<< "The minimum number from array is: "<< min<< "\n";
        break;
      case 6:
        cout<< "Enter the size of array :";
        cin>> n;
        for(int i = 0;i < n; i++)
        {
          cout<< "Enter data: ";
          cin>> arr[i];
        }
        cout<< "\nNow enter the limit value: ";
        cin>> m;
        d.minimum(arr, n, m);
        break;
    }
  }while(choice != 0);
}