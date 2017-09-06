#pragma once

#include "Graphics.h"
#include "Mouse.h"

class ModuleCreator
{
public:
	ModuleCreator( int type,int x,int y );

	void Update( Mouse& ms );
	void Draw( Graphics& gfx ) const;

	bool IsPressed() const;
private:
	const int x;
	const int y;
	const int width = 130;
	const int height = 50;

	const int type;
	
	bool isPressed;
};