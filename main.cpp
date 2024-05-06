#include <iostream>

#include <fmt/core.h>
#include <greet/greet.h>

int main()
{
    fmt::print("Hello World!\n");
    std::cout << greet("Hi There!") << std::endl;
    return 0;
}
