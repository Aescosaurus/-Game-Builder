#pragma once

#include "Graphics.h"
#include "Mouse.h"

#include "RectF.h"
#include "Button.h"

class Editor
{
public:
	void UpdateButtons( Mouse& ms );
	void Draw( Graphics& gfx ) const;
private:
	static constexpr int PADDING = 7;

	RectF sidebar = RectF( float( Graphics::ScreenWidth - 150 - PADDING ),float( PADDING ),float( Graphics::ScreenWidth - PADDING ),float( Graphics::ScreenHeight - PADDING ) );
	RectF topbar = RectF( float( PADDING ),float( PADDING ),sidebar.left - float( PADDING ),50.0f );
	RectF mainArea = RectF( float( PADDING ),topbar.bot + float( PADDING ),sidebar.left - float( PADDING ),float( Graphics::ScreenHeight - PADDING ) );

	Button run = Button( 25.0f,15.0f,35.0f,20.0f );
};