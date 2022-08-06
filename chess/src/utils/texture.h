#ifndef _texture
#define _texture

#include <string>
#include "SDL_image.h"

struct Texture {
	std::string name = " ";
	SDL_Texture* texture = nullptr;
	Texture(std::string name, SDL_Texture* texture);
};

#endif