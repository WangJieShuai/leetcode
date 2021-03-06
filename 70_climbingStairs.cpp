#include <iostream>

using namespace std;

int climbStairs(int n) 
{
    if (n <= 2)
        return n;

    int n1 = 1, n2 = 2;

    int ret = 0;

    for (int i = 3; i <= n; ++i) {
        ret = n1 + n2;
        n1 = n2;
        n2 = ret;
    }

    return ret;
}

int main(int argc, char const *argv[])
{
    cout << climbStairs(6) << endl;
    return 0;
}
