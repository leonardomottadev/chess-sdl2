#include "texture.h"

#include <string>
#include "SDL_image.h"

Texture::Texture(std::string name, SDL_Texture* texture) : name(name), texture(texture) { }