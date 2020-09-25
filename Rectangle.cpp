#include<iostream>
using namespace std;

class rectangle
{
  public:
  float length, width;
  void accept();
  void setlength(float);
  void setwidth(float);
  float perimeter();
  float area();
  void show();
  void compare(float, float);
};

void rectangle :: accept()
{
  cout<< "Please enter the length: ";
  cin>> length;
  cout<< "Now enter the width: ";
  cin>> width;
  setlength(length);
  setwidth(width);
}

void rectangle :: setlength(float l)
{
  length = l;
}

void rectangle :: setwidth(float w)
{
  width = w;
}

float rectangle :: perimeter()
{
  return(2*(length + width));
}

float rectangle :: area()
{
  return(length * width);
}

void rectangle :: show()
{
  cout<< "Length = "<< length<< "\n";
  cout<< "Width = "<< width<< "\n";
}

void compare(float area1, float area2)
{
  if(area1 > area2)
  {
    cout<< "\n1st Rectangle Bigger than 2nd....\n";
  }
  else
  {
    cout<< "\n2nd Rectangle Bigger than 1st....\n";
  }
}

int main()
{
  int choice;
  float length, width;
  rectangle obj1, obj2;
  cout<< "To create object for rectangle 1:\n";
  obj1.accept();
  cout<< "To create object for rectangle 2:\n";
  obj2.accept();
  do
  {
    cout<< "\n\n=========================== Rectangle ===========================\n";
    cout<< "1. Rectangle Area\n2. Rectangle Perimeter\n3. Display data\n4. Compare\n5. Exit\n";
    cout<< "Enter your choice: ";
    cin>> choice;
    switch(choice)
    {
      case 1:
        cout<< "\nThe area of 1st rectangle is: "<< obj1.area();
        cout<< "\nThe area of 2nd rectangle is: "<< obj2.area();
        break;
      case 2:
        cout<< "\nThe perimeter of 1st rectangle is: "<< obj1.perimeter();
        cout<< "\nThe perimeter of 2nd rectangle is: "<< obj2.perimeter();
        break;
      case 3:
        cout<< "\nThe data of 1st rectangle is: \n";
        obj1.show();
        cout<< "\nThe data of 2nd rectangle is: \n";
        obj2.show();
        break;
      case 4:
        cout<< "The comparision result is:\n";
        compare(obj1.area(), obj2.area());
        break;
    }
  }while(choice != 5);
  return 0;
}