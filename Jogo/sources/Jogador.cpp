#include "../headers/Jogador.hpp"

Jogador::Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f tam, int i):
corpo(sf::RectangleShape(tam)),
id(i)
{
    corpo.setPosition(pos);
    if(id == 1)
        corpo.setFillColor(sf::Color::Green);
    else if(id == 2)
        corpo.setFillColor(sf::Color::Blue);

    inicializa();
}

Jogador::Jogador::Jogador(const sf::RectangleShape crp, int i):
corpo(crp),
id(i)
{
    inicializa();
}

Jogador::Jogador::Jogador()
{
    Jogador(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(50.0f, 50.0f), 1); // duvida no que botar no parametro 'id'
    inicializa();
}

Jogador::Jogador::~Jogador()
{

}

void Jogador::Jogador::inicializa()
{
    vel = sf::Vector2f(0.5f, 0.5f);
}

const sf::RectangleShape Jogador::Jogador::getCorpo()
{
    return corpo;
}

void Jogador::Jogador::move()
{
    if(id == 1)
    {
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            corpo.move(0.0f, -vel.y);
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            corpo.move(-vel.x, 0.0f);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            corpo.move(0.0f, vel.y);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            corpo.move(vel.x, 0.0f);
        }

    }

    else if (id == 2)
    {
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            corpo.move(0.0f, -vel.y);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            corpo.move(-vel.x, 0.0f);
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            corpo.move(0.0f, vel.y);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            corpo.move(vel.x, 0.0f);
        }
            
    }
    
}