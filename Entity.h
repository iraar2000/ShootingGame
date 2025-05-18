#pragma once
#include <iostream>
#include "Components.h"
#include<memory>

class Entity 
{
	bool m_active   = true;
	size_t m_id     = 0;
	std::string m_tag = "default";
	std::shared_ptr<Entity> m_entity;

public:
	std::shared_ptr<CTransform> cTransform;
	std::shared_ptr<CShape>     cShape;
	std::shared_ptr<CLifeSpan>  cLifeSpan;
	std::shared_ptr<CScore>     cScore;
	std::shared_ptr<CInput>     cInput;
	std::shared_ptr<CCollision> cCollision;

	bool  isActive()         const; // check is entity is active
	const size_t id()        const; // check id of entity
	const std::string& tag() const; // check the tag
	void  destroy();

private:
	friend class EntityManager;
	Entity(size_t& ids, const std::string& tags);
	std::shared_ptr<Entity> MakeEntity(size_t id, const std::string& tag);
};
