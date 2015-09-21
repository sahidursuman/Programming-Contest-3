#include <iostream>
#include <string>
using namespace std;

typedef long long int lli;

lli factorial(lli num){
    if(num <= 1)
        return 1;
    return num * factorial(num - 1);
}

int main(int argc, char const* argv[])
{
    cout << factorial(stoi(argv[1])*2) / factorial(stoi(argv[1])) / factorial(stoi(argv[1])) << endl;
    return 0;
}
