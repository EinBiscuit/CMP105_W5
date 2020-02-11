#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"
class Corpsy :
	public GameObject
{
public:
	Corpsy();
	~Corpsy();

    void update(float dt) override;

protected:
	Animation walk;
};

