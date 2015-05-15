#ifndef __CERCLE_H__
#define __CERCLE_H__

#include "Point2d.h"
#define _USE_MATH_DEFINES
#include <math.h>

template <class TYPE>
class Cercle
{

public:

	Point2d<TYPE> position;
	TYPE radius;

	Cercle()
	{
		position.x = position.y = 0;
		radius = 1;
	}

	// Com no sabem el tipus de template, podem curar-nos en salut
	// i utilitzem referències constants.
	Cercle(const TYPE &x, const TYPE &y, const TYPE &rad)
	{
		position.x = x;
		position.y = y;
		radius = rad;
	}

	TYPE getArea() const
	{
		return M_PI * radius * radius;
	}

	bool intersects(const Cercle& c) const
	{
		return (position.distanceTo(c.position) <= radius + c.radius);
	}

};

#endif