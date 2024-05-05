#include <iostream>
using namespace std;
void fun(int n,...)
{
    int *c = &n;
    while (*c)
    {
        cout<< *c << " ";
        c++;
    }
}
int main()
{
    fun(2, 1, 3);
}
