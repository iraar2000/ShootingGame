#pragma once
#include "Entity.h"
#include <map>

typedef std::vector<std::shared_ptr<Entity>> EntityVec;
typedef std::map<std::string, EntityVec> EntityMap;

class EntityManager
{
	size_t	  m_EntityCnt = 0;
	EntityVec m_entities  = {};
	EntityVec m_ToAdd     = {};
	EntityMap m_entityMap;

public:
	EntityManager();
	void update();
	void addEntity(const std::string& tag);
	void removeEntity(const std::string& tag);
	EntityVec& getEntities();
	EntityVec& getEntities(const std::string& tag);
};
