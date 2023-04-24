#include <iostream>

using namespace std;
int main()
{
    
    int numero;
    int soma=0;
    do{
        cout<<"insira um valor caralho"<<endl;
        cin>>numero;

        soma+=numero;
        
    } while(numero!=0);

    cout<<"soma total:" << soma <<endl;

    system("pause");
    return 0; 
}