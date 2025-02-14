#include "raycasting.h"

/**
 * movePlayer - Updates the player's position based on movement and rotation.
 * @DeltaTime: Time elapsed since the last frame.
 */
void movePlayer(float DeltaTime)
{
	float moveStep, newPlayerX, newPlayerY;
	
	player.rotationAngle += player.turnDirection * player.turnSpeed * DeltaTime;
	moveStep = player.walkDirection * player.walkSpeed * DeltaTime;
	
	newPlayerX = player.x + cos(player.rotationAngle) * moveStep;
	newPlayerY = player.y + sin(player.rotationAngle) * moveStep;
	
	if (!DetectCollision(newPlayerX, newPlayerY))
	{
		player.x = newPlayerX;
		player.y = newPlayerY;
	}
}

/**
 * renderPlayer - Renders the player on the screen.
 */
void renderPlayer(void)
{
	drawRect(
			player.x * MINIMAP_SCALE_FACTOR,
			player.y * MINIMAP_SCALE_FACTOR,
			player.width * MINIMAP_SCALE_FACTOR,
			player.height * MINIMAP_SCALE_FACTOR,
			0xFFFFFFFF
			);
}

