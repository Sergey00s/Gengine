#ifndef OBJECTS_HPP
# define OBJECTS_HPP

# include <iostream>
# include <vector>
# include <string>

# include "Vector3d.hpp"


class Object
{
    private:
        std::string name;
        std::string type;
        std::string texture;
        Vector3d    position;
        int         width;
        int         height;

    public:
        Object(std::string name, std::string type, std::string texture, Vector3d pos, int width, int height);
        ~Object();
        void    setName(std::string name){ this->name = name;}
        void    setType(std::string type){ this->type = type;}
        void    setTexture(std::string texture){ this->texture = texture;}
        void    setPosition(Vector3d pos){ this->position = pos;}
        void    setWidth(int width){ this->width = width;}
        void    setHeight(int height){ this->height = height;}
        std::string getName(){ return this->name;}
        std::string getType(){ return this->type;}
        std::string getTexture(){ return this->texture;}
        Vector3d    getPosition(){ return this->position;}
        int         getWidth(){ return this->width;}
        int         getHeight(){ return this->height;}

};


# endif