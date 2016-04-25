 #include <iostream>

 using namespace std;


 int main ()
 {
     // print out even numbers in
	 for(int i = 0; i <= 10; ++i)
		 {

		 if(i % 2 != 0)
		 continue ; // skips all odd numbers
		 cout << i << "\n";
		 }
 return 0;
 }