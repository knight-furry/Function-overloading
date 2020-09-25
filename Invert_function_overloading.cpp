#include<iostream>
#include<string.h>
using namespace std;

class invertdata
{
  public:
  int invert (int);
  char * invert (char *);
  void invert(int *, int);
};

int invertdata :: invert(int n)
{
  int rem, sum = 0;
  while(n != 0)
  {
    rem = n % 10;
    sum = rem + sum * 10;
    n = n / 10;
  }
  return sum;
}

char * invertdata :: invert(char * str)
{
  int i,len=0,n;
  char temp;
  len=strlen(str);
  n=len-1;
  for(i = 0; i <=(len/2); i++)
  {
    temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    n--;
  }
  return str;
}

void invertdata :: invert(int * arr, int n)
{
  cout<< "\nThe invert array is:\n";
  for(int i = n-1; i >= 0; i--)
  {
    cout<< arr[i]<< " ==>";
  }
  cout<< "\n";
}


int main()
{
  int choice, num, result, arr[20], n, i;
  char str[20];
  invertdata I;
  do
  {
    cout<< "\n\n=========================== Invert Function ===========================\n\n";
    cout<< "1. Invert an integer\n2. Invert a String\n3. Invert an array\n4. Exit\n\n";
    cout<< "Enter your choice: ";
    cin>> choice;
    switch(choice)
    {
      case 1:
        cout<< "\nEnter any natural number: ";
        cin>> num;
        result = I.invert(num);
        cout<< "The invert number is: "<< result<< "\n";
        break;
      case 2:
        cout<< "\nEnter a string: ";
        cin>> str;
        I.invert(str);
        cout<< "The invert string is: "<< str<< "\n";
        break;
      case 3:
        cout<< "\nPlease enter the size of array: ";
        cin>> n;
        for(int i = 0;i < n; i++)
        {
          cout<< "Enter data: ";
          cin>> arr[i];
        }
        cout<< "\nThe given array is:\n";
        for(int i = 0;i < n; i++)
        {
          cout<< arr[i]<< " ==>";
        }
        I.invert(arr, n);
        break;
    }
  }while(choice != 4);
  return 0;
}