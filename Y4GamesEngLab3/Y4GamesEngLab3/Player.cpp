#include "Player.h"

Player::Player(const AnimatedSprite&)
{
}

Player::~Player()
{
}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animatedSprite.GetCurrentFrame();
	
	///Find way to set texture rect

	// TODO: insert return statement here
}

///Add in The Command Pattern from last lab
void Player::handleInput()
{
}

void Player::update()
{
	m_animatedSprite.update();
}
