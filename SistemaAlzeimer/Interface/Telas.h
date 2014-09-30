#ifndef TELAS_H
#define TELAS_H

#include <iostream>
#include <string>
#include "Negocio/Paciente.h"
#include "Negocio/Lista.h"
#include "Negocio/Relatorios.h"
#include "Negocio/Tratamento.h"
#include "Interface/Telas.h"
#include "Persistencia/Arquivo.h"


using namespace std;

class Telas{
public:
    void menu();
    void menuPaciente();
    void menuPacienteCadastrar();
    void menuManipulacaoDados();
    void menuOpcoes();
    void teste();
    Relatorios relatorio;
    Lista *lista= new Lista;
    Arquivo arquivo;


};


#endif // TELAS_H
