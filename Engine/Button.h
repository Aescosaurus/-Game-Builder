#pragma once

#include "Graphics.h"
#include "Mouse.h"

#include "RectF.h"

class Button
{
public:
	Button( RectF area );
	Button( float x,float y,float width,float height );

	void Update( Mouse& ms );
	void Draw( Graphics& gfx) const;

	bool IsPressed() const;
private:
	float x;
	float y;
	float width;
	float height;
	bool isPressed = false;
};