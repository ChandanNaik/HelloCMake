 #include <iostream>

auto sum(int a, int b)
{
	return a+b;
}
 int main(int argc, char const *argv[])
 {
	 if (argc > 1)
	 {
		 return 1;
	 }
	 auto a=0,b=0;
     //std::cout << "Hello, CMake!" << std:: endl;
	 std::cout << "Enter a: " << std::endl;
	 std::cin >> a;
	 std::cout << "Enter b: " << std::endl;
	 std::cin >> b;
	 
	 std::cout <<"Sum of "<< a << " and " << b << " is " << sum(a,b) << std:: endl;
     return 0;
 }
 