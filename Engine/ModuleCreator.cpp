#include "ModuleCreator.h"

ModuleCreator::ModuleCreator( int type_in,int x_in,int y_in )
	:
	type( type_in ),
	x( x_in ),
	y( y_in )
{
}

void ModuleCreator::Update( Mouse& ms )
{
	isPressed = ( ms.GetPosX() > x && ms.GetPosX() < x + width &&
		ms.GetPosY() > y && ms.GetPosY() < y + height );
}

void ModuleCreator::Draw( Graphics& gfx ) const
{
	gfx.DrawRect( x,y,width,height,Colors::Red );
}

bool ModuleCreator::IsPressed() const
{
	return isPressed;
}
