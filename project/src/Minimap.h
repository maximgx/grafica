#pragma once

#include "point2.h"
#include "Space.h"


class Game;
class EnemyManager;
class SecretTechManager;
class StarDestroyer;
class SecretTech;

class Minimap {
public:
	Minimap() {}

	void render(
		const Game& game) const;
  bool centersOnPlayer = true;
  bool rotatesWithPlayer = true;

private:
  const Vector2 minimapSize = Vector2{400.f, 400.f};

  // The minimap is aligned to the bottom right
  const float offsetFromLeft = 70.f;
  const float offsetFromBottom = 60.f;

  const float sonarPointSize = 6.f;
  const float playercolor[3] = {1.f, 0.f, 1.f};
  const float enemyColor[3] = {1.f, 0.f, 0.f};
  const float junkColor[3] = {0.f, 0.f, 1.f};

  const float sonarLineColor[3] = {0.f, 0.f, 1.f};
  const float sonarLineWidth = 3.f;
  const float sonarRotationSpeed = 60.f; // in degrees/s
  const float sonarLineRadius = Space::width / 2.f;

  const float mapBoundsColor[3] = { 0.f, 1.f, 1.f };
  const float mapBoundsLineWidth = 2.f;

  const float sonarCircleColor[3] = {0.f, 0.f, 1.f};
  const float sonarCircleLineWidth = 1.f;
  const int sonarCircleCount = 6;
  const float sonarCircleRadiusIncrement = Space::width / 10.f;
  const int sonarCircleLineSections = 64;
};
