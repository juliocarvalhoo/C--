#include <iostream>
#include "aluno.h"

struct No
{
    Aluno *No::filhoesqueda;
    No* filhoesquerda;
    No* filhodireita;

};

class ArvoreBinariadeBusca
{
    private:
    No* raiz;

    public:
    ArvoreBinariadeBusca();
    ~ArvoreBinariadeBusca();
    void deletarArvore(No* Noatual);
    No* obterRaiz();
    bool estavazio();
    bool estacheio();
    void inserir(Aluno aluno);
    void remover(Aluno aluno);
    void buscar(Aluno aluno, bool& busca);
    void imprimirpre(No* Noatual);
    void imprimirordem(No* Noatual);
    void imprimirpos(No* Noatual);

};
