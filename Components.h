#pragma once
#include "Vec2.h"
#include <SFML/Graphics.hpp>

/* transform component class */
class CTransform 
{
public:
	Vec2 Pos;
	Vec2 Vel;
	Vec2 Rot;
	CTransform(const Vec2& pos, const Vec2& vel, const Vec2& rot)
		:Pos(pos)
		,Vel(vel)
		,Rot(rot)
	{
	};
};

/* shape component class */
class CShape
{
public:
	sf::CircleShape shape;
	CShape(float radius, int edges, sf::Color& fillColor, sf::Color& outlnColor, float thick)
		: shape(radius, edges)
	{
		shape.setFillColor    (fillColor);
		shape.setOutlineThickness (thick);
		shape.setOutlineColor(outlnColor);
		shape.setOrigin({radius, radius});
	}
};

/* input component class */
class CInput {
public:
	bool buttonUp    = false;
	bool buttonDown  = false;
	bool buttonRight = false;
	bool buttonLeft  = false;
	bool buttonShoot = false;
	CInput() {};
};

/* lifeSpan component class */
class CLifeSpan
{
	float remaining = 0;
	float total     = 0;
	CLifeSpan(const float total)
		: total(total)
	{
	};
};

/* collision component class */
class CCollision 
{
	float radius;
	CCollision(float radius)
		:radius(radius)
	{
	};
};

/* score Component class */
class CScore
{
	float score = 0;
	CScore(float score)
		:score(score)
	{
	};
};