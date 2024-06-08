#pragma once

#include "SFML/Graphics.hpp"

namespace Jogador
{
    class Jogador
    {
    private:
        sf::RectangleShape corpo;
        sf::Vector2f vel;
        int id; // para determinar o jogador
        void inicializa();

    public:
        Jogador(const sf::Vector2f pos, const sf::Vector2f tam, int i);
        Jogador(const sf::RectangleShape crp, int i);
        Jogador();
        ~Jogador();
        
        const sf::RectangleShape getCorpo();
        void move();
    };
}