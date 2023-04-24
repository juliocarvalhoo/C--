#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"

using namespace std;

    ArvoreBinariadeBusca::ArvoreBinariadeBusca()
    {
        raiz = NULL;
    }
    ArvoreBinariadeBusca::~ArvoreBinariadeBusca()
    {

        
    }
    void ArvoreBinariadeBusca::deletarArvore(No* Noatual)
    {
        
    }
    No* ArvoreBinariadeBusca::obterRaiz()
    {
        return raiz;        
    }
    bool ArvoreBinariadeBusca::estavazio()
    {
        return (raiz == NULL);
        
    }
    bool ArvoreBinariadeBusca::estacheio()
    {
        try
        {
            No* temp= new No;
            delete temp;
            return false;
        } catch(bad_alloc exception){
            return true;
        }
        
    }
    void ArvoreBinariadeBusca::inserir(Aluno aluno)
    {
        
    }
    void ArvoreBinariadeBusca::remover(Aluno aluno)
    {
        
    }
    void ArvoreBinariadeBusca::buscar(Aluno aluno, bool& busca)
    {
        
    }
    void ArvoreBinariadeBusca::imprimirpre(No* Noatual)
    {
        
    }
    void ArvoreBinariadeBusca::imprimirordem(No* Noatual)
    {
        
    }
    void ArvoreBinariadeBusca::imprimirpos(No* Noatual)
    {
        
    }