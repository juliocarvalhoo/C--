#include <iostream>
#include <stack>

using namespace std;

int main()
{
   stack <string> cartas;

   if(cartas.empty())
   {
    cout <<"Pilha vazia\n\n";
   }
   else
   {
    cout <<"Pilha com cartas\n\n";
   }

   cartas.push("Rei de copas");
   cartas.push("Rei de Espadas");
   cartas.push("Rei de Ouros");
   cartas.push("Rei de Paus");

   cout << "Tamanho da pilha: " << cartas.size() <<"\n";
   cartas.pop();
   cout << "Tamanho da pilha: " << cartas.size() <<"\n";
   cout <<"Carta do topo:" << cartas.top() <<"\n";

   

    system("pause");
    return 0;
}