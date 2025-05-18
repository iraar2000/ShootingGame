#include "Vec2.h"

/* constructor implementations */
Vec2::Vec2()
	:x(0)
	,y(0)
{};
Vec2::Vec2(float xin, float yin) 
	:x(xin)
	,y(yin)
{};

/* operator overloading implementation */
bool Vec2::operator == (const Vec2& rhs) const 
{
	/* equality comparision operator */
	return (x == rhs.x && y == rhs.y);
};

bool Vec2::operator != (const Vec2& rhs) const
{
	/* non-equality comparision operator */
	return (x != rhs.x && y != rhs.y);
};

Vec2 Vec2::operator + (const Vec2& rhs) const
{
	/* additional operator */
	return Vec2((x + rhs.x), (y + rhs.y));
};

Vec2 Vec2::operator - (const Vec2& rhs) const 
{
	/* subtraction operator */
	return Vec2((x - rhs.x), (y - rhs.y));
};

float Vec2::operator / (const Vec2& rhs) 
{
	/* division operator a1b1/pow(a,2) + a2b2/pow(a,2) */
	return ((x * rhs.x) / (y * y + x * x) + (y * rhs.y) / (y * y + x * x));
};

Vec2 Vec2::operator * (const Vec2& rhs) const
{
	/* multiplication operator */
	return Vec2((x * rhs.x), (y * rhs.y));
};

void Vec2::operator += (const Vec2& rhs)
{
	/* incrementation operator */
	x += rhs.x;
	y += rhs.y;
	return;
};

void Vec2::operator -= (const Vec2& rhs)
{
	/* decrementation operator */
	x -= rhs.x;
	y -= rhs.y;
	return;
};

void Vec2::operator *= (const float val)
{
	/* multiplicator operator */
	x *= val;
	y *= val;
	return;
};

void Vec2::operator /= (const float val)
{
	/* divisor operator */
	x /= val;
	y /= val;
	return;
};

float Vec2::dot(const Vec2& vec) const
{
	/* the dot product operation */
	return (x * vec.x + y * vec.y);
};


