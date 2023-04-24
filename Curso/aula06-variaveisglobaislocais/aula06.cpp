#include <iostream>

using namespace std;

int n1=10, n2=20; //var global
int main()
{
    int n3=30,n4=50; //var local
    int total = n1+n2+n3+n4;

    cout << "O resultado e: " << total << "\n";

    system("pause");
    return 0;
}