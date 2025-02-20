#ifndef AMMO_H 
#define AMMO_H 

#include <glm.hpp>
#include <gtc\matrix_transform.hpp>
#include <map>
#include "BCE/Graphic/Camera.h"
#include "BCE/Graphic/Model.h"
#include "BCE/Base/Platform.h"
#include "BCE/Base/ShaderManager.h"
#include "Player.h"
#include "Enemy.h"

using namespace BCE::Base;
using namespace BCE::Graphics;

class Ammo : public Enemy
{
public:
	Ammo(glm::vec3 position, Player* player);
	void Init();
	void Update();
	void Draw();
	float x;
	float z;
private:
	void Shoot();
};

#endif // ! 
