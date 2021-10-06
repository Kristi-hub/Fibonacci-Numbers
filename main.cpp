#include <iostream>
int fib(int n){
    if(n<2)
        return n;
    else 
        return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;
    int x =  fib(n);
    std::cout << "Number is " << x;
    return 0;
}




