#include<iostream>
using namespace std;

class printdata
{
  public:
  void print(int);
  void print (int, int);
  void print(char *);
  void print(int, char *);
  void print(char, char *);
};

void printdata :: print(int a)
{
  cout<< "The Result is: ";
  cout<< "<"<< a<< ">";
}

void printdata :: print(int a, int b)
{
  cout<< "The Result is: ";
  cout<< "[<"<< a<<">, "<< "<"<< b<< ">]";
}

void printdata :: print(char * str)
{
  cout<< "The Result is: ";
  cout<< str;
}

void printdata :: print(int a, char * str)
{
  int i;
  cout<< "The Result is: ";
  for(i = 0; i < a; i++)
  {
    cout<< str[i];
  }
}

void printdata :: print(char a, char * str)
{
  cout<< "The Result is: ";
  int count=0, i=0;
  while(str[i] != '\0')
  {
    if(str[i] == a)
    {
      count++;
    }
    i++;
  }
  cout<< count;
}

int main()
{
  int choice, num1, num2;
  char x;
  char str[20];
  printdata p;
  do
  {
    cout<< "\n============================= Function Overloading ==================================\n\n";
    cout<< "\n1. To print integer\n2. To print more integer\n3. To print string\n";
    cout<< "4. To display first n characters \n5. To count no of occurrences\n0. For Exit....!\n";
    cout<< "\nPlease enter your choice: ";
    cin>> choice;
    switch(choice)
    {
      case 1:
        cout<< "\nEnter any number: ";
        cin>> num1;
        p.print(num1);
        cout<< "\nThank you....\n";
        break;
      case 2:
        cout<< "Please enter two numbers:\n";
        cin>> num1>> num2;
        p.print(num1, num2);
        cout<< "\nThank you....\n";
        break;
      case 3:
        cout<< "Please enter a string: ";
        cin>> str;
        p.print(str);
        cout<< "\nThank you....\n";
        break;
      case 4:
        cout<< "Please enter a string:\n ";
        cin>> str;
        cout<< "Enter the number of characters to print: ";
        cin>> num1;
        p.print(num1, str);
        cout<< "\nThank you....\n";
        break;
      case 5:
        cout<< "Please enter a string: ";
        cin>> str;
        cout<< "Enter a character to count: ";
        cin>> x;
        p.print(x, str);
        cout<< "\nThank you....\n";
        break;
    }
  }while(choice != 0);
}