#include "Module.h"

Module::Module()
	:
	type( 0 ),
	x( 999 ),
	y( 999 ),
	xOrig( 999 ),
	yOrig( 999 )
{
}

Module::Module( int type_in,int x_in,int y_in )
	:
	type( type_in ),
	x( x_in ),
	y( y_in ),
	xOrig( x_in ),
	yOrig( y_in )
{
}

void Module::Update( Mouse& ms )
{
	if( ms.LeftIsPressed() )
	{
		if( ms.GetPosX() > x && ms.GetPosX() < x + width &&
			ms.GetPosY() > y && ms.GetPosY() < y + height )
			StartDrag( ms );
	}
	else
		StopDrag();

	if( isDragging )
	{
		x = ms.GetPosX() + offsetX;
		y = ms.GetPosY() + offsetY;
	}

	while( x < 0 )
		++x;
	
	while( y < 0 )
		++y;

	while( x + width > Graphics::ScreenWidth )
		--x;
	
	while( y + height > Graphics::ScreenHeight )
		--y;
}

void Module::Draw( Graphics& gfx ) const
{
	gfx.DrawRect( x,y,width,height,Colors::Red );
}

void Module::SetType( int type_in )
{
	type = type_in;
}

void Module::SetPos( int x_in,int y_in )
{
	x = x_in;
	y = y_in;
}

void Module::StartDrag( Mouse& ms )
{
	if( !isDragging )
	{
		isDragging = true;
		offsetX = x - ms.GetPosX();
		offsetY = y - ms.GetPosY();
	}
}

void Module::StopDrag()
{
	isDragging = false;
}

bool Module::IsPressed() const
{
	return isDragging;
}
