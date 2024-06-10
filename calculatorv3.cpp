#include <iostream>
#include <cmath>
int main(){
    double n0 = 0, n1 = 0, o0 = 0;
    std::string restart0 = "y";
    std::string c0 = "E";

    while(restart0 == "y")
    {
    std::cout << "CalculatorV3-Input the first number!" << '\n';
    std::cin >> n0;
    std::cout << "what function do wou want to perform? + - * / ^ sqrt" << '\n';
    std::cin >> c0;
    if (c0 == "sqrt")
    {
        goto skip;
    }
    std::cout << "Input the second number" << std::endl;
    std::cin >> n1;
    skip:

    if (c0 == "+")
    {
        o0 = n0 + n1;
            std::cout << "the answer is " << o0 << '\n';
    }

    else if (c0 == "-")
    {
        o0 = n0 - n1;
            std::cout << "the answer is " << o0 << '\n';
    }
    
    else if (c0 == "*")
    {
        o0 = n0 * n1;
            std::cout << "the answer is " << o0 << '\n';
    }
    
    else if (c0 == "/")
    {
        o0 = n0 / n1;
            std::cout << "the answer is " << o0 << '\n';
    }
        else if (c0 == "^")
    {
        o0 = pow(n0, n1);
            std::cout << "the answer is " << o0 << '\n';
    }
        else if (c0 == "sqrt")
    {
        o0 = sqrt(n0);
            std::cout << "the answer is " << o0 << '\n';
    }
    else
    {
        std::cout << "ERROR" << '\n';
    }

    std::cout << "Restart? y/n" << '\n';
    std::cin >> restart0;
    }
    return 0;
}