#include <iostream>
using namespace std;

/*
참조자의 변수 범위는 배열요소도 포함됨
*/
int main(void) 
{
  int arr[3] = {1,3,5};
  int &ref1=arr[0];
  int &ref2=arr[1];
  int &ref3=arr[2];

  cout<<ref1<<endl; // 1
  cout<<ref2<<endl; // 3
  cout<<ref3<<endl; // 5
  return 0;
}
