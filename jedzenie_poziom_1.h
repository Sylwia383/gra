#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <memory>

class Food : public sf::Sprite{
    std::string typ_="food";
    float v_y_;
    float rotat_ = (rand()%100)-50;
public:
    Food(const sf::Texture &texture, const sf::Vector2f position): sf::Sprite(texture){
        setPosition(position);
    }
    virtual std::string typ(){return typ_;}
    void drop(const sf::Time &e, int);
};

class Good_Food : public Food{
    std::string typ_="good_food";
public:
    Good_Food(const sf::Texture &texture, const sf::Vector2f position) : Food(texture,position){}
    std::string typ(){return typ_;}
};

class Bad_Food : public Food{
    std::string typ_="bad_food";
public:
    Bad_Food(const sf::Texture &texture, const sf::Vector2f position) : Food(texture,position){}
    std::string typ(){return typ_;}
};
