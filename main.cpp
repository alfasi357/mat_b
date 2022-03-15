#include "mat.hpp"
#include <string>
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    int c=13;
    int r=5;
    char a ='@';
    char b = '!';
    std::string t = ariel::mat(c, r, a, b);
    cout<<t;




    return 0;
}