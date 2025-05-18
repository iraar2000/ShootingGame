#include "EntityManager.h"

EntityManager::EntityManager() {};

/* this function updates the m_entities vector with the added on values */
void EntityManager::update()
{
	for (std::shared_ptr<Entity> e : m_ToAdd) {
		m_entities.push_back(e);
	}
};

/* this entity is used for adding entities to the m_entity vector */ 
void EntityManager::addEntity(const std::string& tag) 
{
	auto e = MakeEntity(m_EntityCnt++, tag);
	m_ToAdd.push_back(e);
	m_entityMap[tag].push_back(e);
	return;
};

/* this function is used to remove entities from the entity vector */ 
void EntityManager::removeEntity(const std::string& tag)
{
	
};

/* this function returns the m_entities vector variable */  
EntityVec& EntityManager::getEntities()
{
	return m_entities;
};

EntityVec& EntityManager::getEntities(const std::string& tag)
{

	/*
		this returns the m_entities vector variable by tag
		there is the maping variable m_entityMap which maps the entities
		by their tags   tag : std::vector<Entities> EntityVec
	*/
	return m_entityMap[tag];
};
