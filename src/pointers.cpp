#include <iostream>

using namespace std;

void myswap(int * ptr1, int* ptr2)
{
  auto temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}


int main()
{
  int a = 25, b = 11;    

  cout<<"What am I doing wrong ☹ \n\n";

  cout<<"a = "<<a<<", b = "<<b<<endl;

int  *ptr1 = &a;
int *ptr2 = &b;  
 
  myswap(ptr1, ptr2); // but mine doesn't ?!?!?!?!!!???

  cout<<"a = "<<a<<", b = "<<b<<endl;


}
