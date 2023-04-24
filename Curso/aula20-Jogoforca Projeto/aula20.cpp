#include <iostream>

using namespace std;

int main()
{
    char palavra[30], letra[1], secreta[30];
    int tam=0, i=0, chances=6, acertos=0;
    bool acerto = false;

    cout << "Digite a palavra secreta: \n";
    cin >> palavra;
    system("cls");

    while(palavra[i] != '\0')
    {
        i++;
        tam++;
    }
    
    for (i=0; i<30;i++)
    {
        secreta[i]='-';
    }
    
    while((chances>0)&&(acertos<tam))
    { 
        cout <<"Tentativas: " << chances << "\n\n";
        cout << "Palavra Secreta: ";
        for (i=0; i<tam;i++)
        {
            cout <<secreta[i];
        }
        cout<<"\n\nDigite um letra: ";
        cin >> letra[0];
        for(i=0; i<tam; i++)
        {
            if(palavra[i]==letra[0])
            {
                acerto = true;
                secreta [i] = palavra[i];
                acertos++;
            }  
        }
        if(!acerto)
        {
            chances--;
        }
        acerto = false;
        system("cls");
    }
    if(acertos==tam)
    {
        cout<< "você venceu";
    }
    else
    {
        cout<< "you lose!";
    }
    return 0;   
}
