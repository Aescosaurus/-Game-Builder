#include "RectF.h"

RectF::RectF( float left_in,float top_in,float right_in,float bot_in )
	:
	left( left_in ),
	top( top_in ),
	right( right_in ),
	bot( bot_in ),
	width( right_in - left_in ),
	height( bot_in - top_in )
{
}

RectF::RectF( char f,float left_in,float top_in,float width_in,float height_in )
	:
	left( left_in ),
	top( top_in ),
	right( left_in + width_in ),
	bot( top_in + height_in ),
	width( width_in ),
	height( height_in )
{
}
