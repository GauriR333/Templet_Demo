#include <iostream>
#include"templet.cpp"
#include"test.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	Test <int>t1(10);
	t1.display();
		
	Test<char>t2('g');
	t2.display();
	}
	
	Test<char*>t3("gauri");
	t3.display();

int main_1(int argc, char** argv) {
	 cout<<sum(10,20);
	  demo(12,13.23);
	return 0;
}
