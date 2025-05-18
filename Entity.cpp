#include "Entity.h"

Entity::Entity(size_t& ids, const std::string& tags)
	:m_id(ids)
	,m_tag(tags)
{
};

// check is entity is active
bool  Entity::isActive() const
{
	return m_active;
};

// check id of entity
const size_t Entity::id() const
{
	return m_id;
};

// check the tag
const std::string& Entity::tag() const 
{
	return m_tag;
}; 

// destroys the Entity object created
void  Entity::destroy()
{
	m_active = false;
};

// for creating the shared pointer of entity class
std::shared_ptr<Entity> Entity::MakeEntity(size_t id, const std::string& tag)
{
	this->m_entity = std::shared_ptr<Entity>(new Entity(id, tag));
	return this->m_entity;
};