#include <string>
#include "hello-greet.h"

//& implies that this is a reference
std::string get_greet(const std::string &who)
{
    return "Hello" + who;
}