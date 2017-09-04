#pragma once

#include "Graphics.h"

class ModuleCreator
{
public:
	ModuleCreator( int x,int y,int width,int height );
	void Draw( Graphics& gfx );
private:
	int x;
	int y;
	const int xOrig;
	const int yOrig;
	int width = 130;
	int height = 50;
};