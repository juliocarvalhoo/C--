#include <iostream>
#include <stack>

using namespace std;

int Deletar(stack <string> name, int deleted);
int Adicionar(stack <string> name, string carta);

int main()
{
    stack <string> Pilhacartas;

    bool stop = false;
    int choice = 0, numberdelete=0;
    string card,  a;

    while (stop == false)
    {
        system("cls");
        cout<<"Press [1] to add"<<"\n";
        cout<<"Press [2] to del"<<"\n";
        cout<<"Press [3] to view last"<<"\n";
        cout<<"Press [0] to quit"<<"\n";
        cin >> choice;
        
        if(choice == 1)
        {
            cout<<"Qual carta mestre?"<<"\n";
            cin >> card;
            Adicionar(Pilhacartas,card);
            cout<<"Carta adicionada "<<"\n";
            cin >> a;
        }

        else if(choice == 2)
        {
            cout<<"Quantas cartas deseja deletar mestre?"<<"\n";
            cin >> numberdelete;
            Deletar(Pilhacartas,numberdelete);
            cout<<"Carta deletada"<<endl;
            cin >> a;
        }

        else if(choice == 3)
        {
    
            cout<<"Sua carta selecionada: " << a <<"\n" ;
            cin >> a;
        }

        else
        {
            stop=true;
        }
    }
    
    
}

int Deletar(stack <string> name, int deleted)
{
    for (int i = 0; i < deleted; i++)
    {
        name.pop();
    }

    
}

int Adicionar(stack <string> name, string carta)
{
    name.push(carta);    
}