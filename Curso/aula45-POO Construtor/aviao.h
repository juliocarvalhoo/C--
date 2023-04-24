#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

#include <iostream>
using namespace std;

class Aviao
{
    public:
        int vel =0;
        int velmax;
        std::string tipo;
        Aviao(int tp);
        void imprimir();
    private:
};

Aviao::Aviao(int tp) // 1=jata 2=monomotor 3=planador
{
     if(tp==1)
    {
        velmax=800;
        tipo = "Jato";
    }
    else if (tp==2)
    {
        velmax=350;
        tipo = "Monomotor";
    }
     else if (tp==3)
    {
        velmax=180;
        tipo = "Planador";
    }

}

void Aviao::imprimir()
{
   cout <<"Tipo............:" << tipo << endl;
   cout <<"Velocidade......:" << velmax << endl;
   cout <<"Velocidade atual:" << vel << endl;
}


#endif
