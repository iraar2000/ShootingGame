#pragma once

/* vector of a 2d dimension contains x and y coordinates */
class Vec2
{
public:
	float x; // x coordinate
	float y; // y coordinate

	Vec2();
	Vec2(float xin, float yin);

	// operator overloading 
	bool operator == (const Vec2& rhs) const;
	bool operator != (const Vec2& rhs) const;

	Vec2 operator + (const Vec2& rhs) const;
	Vec2 operator - (const Vec2& rhs) const;
	Vec2 operator * (const Vec2& rhs) const;
	float operator / (const Vec2& rhs);

	void operator += (const Vec2& rhs);
	void operator -= (const Vec2& rhs); 
	void operator *= (const float val);
	void operator /= (const float val);

	// important operators
	float dot(const Vec2& Vec) const;

};
