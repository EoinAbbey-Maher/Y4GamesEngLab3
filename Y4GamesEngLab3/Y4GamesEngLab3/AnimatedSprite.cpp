#include "AnimatedSprite.h"


AnimatedSprite::~AnimatedSprite()
{
}

AnimatedSprite::AnimatedSprite()
{
	m_currentFrame = 0;
}

AnimatedSprite::AnimatedSprite(const SDL_Texture& t_texture) : m_currentFrame(0), m_time(0.5f) 
{
}	

AnimatedSprite::AnimatedSprite(const SDL_Texture& t_texture, const SDL_Rect& t_Rect) : m_currentFrame(0), m_time(0.5f)
{
	m_frames.push_back(t_Rect);
}


const int& AnimatedSprite::getClock()
{
	return m_clock;
}

const float& AnimatedSprite::getTime()
{
	return m_time;
}

const SDL_Rect& AnimatedSprite::getFrame(int t_n)
{
	if (t_n < m_frames.size())
	{
		return m_frames[t_n];
	}
	return m_frames[0];
}

const std::vector<SDL_Rect>& AnimatedSprite::getFrames()
{
	return m_frames;
}

const int AnimatedSprite::GetCurrentFrame()
{
	return m_currentFrame;
}

void AnimatedSprite::addFrame(SDL_Rect& t_frameRect)
{
	m_frames.push_back(t_frameRect);
}

void AnimatedSprite::update()
{
	m_clock++;
	if (m_clock > m_time) {
		if (m_frames.size() > m_currentFrame + 1)
		{
			m_currentFrame++;
		}
		else {
			m_currentFrame = 0;
		}
		m_clock = 0;
	}
}
