#include<iostream>  
int main()  
{  
    int a, b, *p1, *p2;  
    std::cout << "Enter two numbers: ";  
    std::cin >> a >> b;  
    p1 = &a;  
    p2 = &b;  
    std::cout << "Sum: " << *p1 + *p2 << std::endl;  
    return 0;  
}