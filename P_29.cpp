#include<iostream>
using namespace std;
template<typename T>
T mySquare(T x)
{
    return x*x;
}

int main()
{
    cout<<mySquare<int>(10)<<endl;
    cout<<mySquare<float>(5.5)<<endl;
    return 0;
}
