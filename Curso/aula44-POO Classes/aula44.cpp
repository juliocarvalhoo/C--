#include <iostream>
using namespace std;

class Aviao
{
public: 
    int vel =0;
    int velmax;
    string tipo;
    void ini (int tp);
private:
};

void Aviao::ini(int tp) // 1=jata 2=monomotor 3=planador
{
    if(tp==1)
    {
        this -> velmax=800;
        this -> tipo = "Jato";
    }
    else if (tp==2)
    {
        this -> velmax=350;
        this -> tipo = "Monomotor";
    }
     else if (tp==3)
    {
        this -> velmax=180;
        this -> tipo = "Planador";
    }

}

int main()
{
    Aviao *avl = new Aviao();
    avl ->ini(3);
    cout << avl -> velmax <<"\n";
   
    system("pause");
    return 0;
}