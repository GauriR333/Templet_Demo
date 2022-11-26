#include"test.h"
#include<iostream>
template<class T>
Test<T>::Test(){
	this->x=00;
}

////////////////////////////////////////////////////////
template<class T>
Test<T>::Test(T x){
	this->x=x;
}

////////////////////////////////////////////////////////

template<class T>
 void Test <T>::display(){
 	cout<<"\nvalue="<<x;
 }
 
 ////////////////////////////////////////////////////////
 
 template<class T>
 T Test<T>::getx(){
 	
 	return x;
 }
 
 ////////////////////////////////////////////////////////
 
 template<class T>
 void Test<T>::setX(T x){
 	this->x=x;
 	
 }
 

