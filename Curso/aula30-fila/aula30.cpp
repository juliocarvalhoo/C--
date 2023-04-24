#include <iostream>
#include <queue>

using namespace std;

int main()
{
   queue <string> cartas;

   cartas.push("Rei de copas");
   cartas.push("Rei de Espadas");
   cartas.push("Rei de Ouros");
   cartas.push("Rei de Paus");

   cout << "Tamanho da fila: " << cartas.size() <<"\n";
   cout << "Primeira carta : " << cartas.front() <<"\n";
   cout << "Ultima carta   : " << cartas.back() <<"\n";

   while (!cartas.empty())
   {
    cout <<"primeira carta:" <<cartas.front() <<"\n";
    cartas.pop();
   }
   
   

    system("pause");
    return 0;
}