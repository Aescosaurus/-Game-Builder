#pragma once

class RectF
{
public:
	RectF( float left,float top,float right,float bot );
	RectF( char f,float left,float top,float width,float height );
public:
	float left;
	float top;
	float right;
	float bot;
	float width;
	float height;
};