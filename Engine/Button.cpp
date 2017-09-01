#include "Button.h"

Button::Button( RectF area )
	:
	x( area.left ),
	y( area.top ),
	width( area.width ),
	height( area.height )
{
}

Button::Button( float x_in,float y_in,float width_in,float height_in )
	:
	x( x_in ),
	y( y_in ),
	width( width_in ),
	height( height_in )
{
}

void Button::Update( Mouse & ms )
{
	isPressed = ( ms.GetPosX() > x && ms.GetPosX() < x + width &&
		ms.GetPosY() > y && ms.GetPosY() < y + height );
}

void Button::Draw( Graphics& gfx ) const
{
	gfx.DrawRect( int( x ),int( y ),int( width ),int( height ),Colors::White );
}

bool Button::IsPressed() const
{
	return isPressed;
}
