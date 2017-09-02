#pragma once

#include "Graphics.h"
#include "Mouse.h"

#include "RectF.h"
#include "Button.h"
#include "Module.h"

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

	Button run = Button( float( PADDING + PADDING ),float( PADDING + PADDING ),30.0f,30.0f );

	// Modules!
	Module setVar = Module( 1,Graphics::ScreenWidth - 150 - PADDING + 10,100 );
};