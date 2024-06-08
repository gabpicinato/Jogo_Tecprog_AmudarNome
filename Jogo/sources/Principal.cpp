#include "../headers/Principal.hpp"

Jogo::Principal::Principal():
window(sf::VideoMode(800.f, 600.f), "Jogo PiChe"),
jogador1(sf::Vector2f(50.0f, 50.0f), sf::Vector2f(45.0f, 60.0f), 1),
jogador2(sf::Vector2f(250.0f, 250.0f), sf::Vector2f(70.0f, 10.0f), 2)
{
    executar();
}

Jogo::Principal::~Principal()
{
}

void Jogo::Principal::executar()
{
    while(window.isOpen())
    {
        sf::Event evento;
        if(window.pollEvent(evento))
        {
            if(evento.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        jogador1.move();
        jogador2.move();
        window.draw(jogador1.getCorpo());
        window.draw(jogador2.getCorpo());
        window.display();
    }
}