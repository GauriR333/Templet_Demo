#include<iostream>
using namespace std;
template <class T>
 class Test
 {
 	T x;
 
 public:
 Test();
 Test(T);
 void display();
 T getx();
 void setX(T);
 
};
