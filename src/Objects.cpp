#include "../includes/Engine.hpp"



Object::Object(std::string name, std::string type, std::string texture, Vector3d pos, int width, int height)
{
    this->name = name;
    this->type = type;
    this->texture = texture;
    this->position = pos;
    this->width = width;
    this->height = height;
}


