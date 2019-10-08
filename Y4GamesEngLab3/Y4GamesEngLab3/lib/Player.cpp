#include "Player.h"
#include "IdleState.h"
#include <iostream>
#include "Debug.h"

Player::Player(SDL_Renderer& t_renderer) : 
	m_renderer(&t_renderer)
{
	m_animatedSprite.loadFromFile("ASSETS\\IMAGES\\sprite.bmp");

	SDL_Rect intrect;

	for (int i = 0; i < 3; i++)
	{
		intrect.x = 32 * i;
		intrect.y = 0;
		intrect.h = 32;
		intrect.w = 32;

		m_animatedSprite.addFrame(intrect);
	}
	m_state.setCurrent(new IdleState());
	m_state.setPrevious(new IdleState());
}

Player::Player(const AnimatedSprite& t_s, SDL_Renderer& t_renderer) :
	m_renderer(&t_renderer)
{
	m_animatedSprite.loadFromFile("ASSETS\\IMAGES\\sprite.bmp");

	SDL_Rect intrect;

	for (int i = 0; i < 3; i++)
	{
		intrect.x = 32 * i;
		intrect.y = 0;
		intrect.h = 32;
		intrect.w = 32;

		m_animatedSprite.addFrame(intrect);
	}

	m_state.setCurrent(new IdleState());
	m_state.setPrevious(new IdleState());
}

Player::~Player()
{

}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animatedSprite.GetCurrentFrame();
	m_animatedSprite.setRect(m_animatedSprite.getFrame(frame));
	return m_animatedSprite;
}

///Add in The Command Pattern from last lab
void Player::handleInput()
{
}

void Player::update()
{
	m_animatedSprite.update();
}

void Player::render()
{
	m_animatedSprite.Render();
}

void Player::setRenderer(SDL_Renderer & t_render)
{
	m_renderer = &t_render;
}
