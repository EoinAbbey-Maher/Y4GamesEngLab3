#include "Player.h"
#include "IdleState.h"
#include <iostream>
#include "Debug.h"

Player::Player(SDL_Renderer& t_renderer) : 
	m_renderer(t_renderer),
	m_animatedSprite(t_renderer)
{
	m_state.setCurrent(new IdleState());
	m_state.setPrevious(new IdleState());
}

Player::Player(const AnimatedSprite& t_s, SDL_Renderer& t_renderer) :
	m_renderer(t_renderer),
	m_animatedSprite(t_renderer)
{
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
