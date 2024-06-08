#pragma once

#include <iostream>
#include "Jogador.hpp"


namespace Jogo
{
    class Principal
    {
    private:
        sf::RenderWindow window;
        Jogador::Jogador jogador1;
        Jogador::Jogador jogador2;

    public:
        Principal();
        ~Principal();
        void executar();

    };
}