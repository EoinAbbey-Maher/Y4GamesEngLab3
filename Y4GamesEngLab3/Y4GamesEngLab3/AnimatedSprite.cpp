#include "AnimatedSprite.h"


AnimatedSprite::~AnimatedSprite()
{
}

AnimatedSprite::AnimatedSprite(SDL_Renderer& t_renderer):
	m_renderer(t_renderer)
{
	m_currentFrame = 0;
}

AnimatedSprite::AnimatedSprite(SDL_Texture& t_texture, SDL_Renderer& t_renderer) :
	m_texture(&t_texture), 
	m_currentFrame(0), 
	m_time(0.5f),
	m_renderer(t_renderer)
{
}	

AnimatedSprite::AnimatedSprite(SDL_Texture& t_texture, const SDL_Rect& t_Rect, SDL_Renderer& t_renderer) : 
	m_texture(&t_texture), 
	m_currentFrame(0), 
	m_time(0.5f),
	m_renderer(t_renderer)
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

const SDL_Rect& AnimatedSprite::getIntRect()
{
	return m_intRect;
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

void AnimatedSprite::setRect(const SDL_Rect& t_rect)
{
	m_intRect = t_rect;
}

int AnimatedSprite::getWidth()
{
	return m_imageWidth;
}

int AnimatedSprite::getHeight()
{
	return m_imageHeight;
}

void AnimatedSprite::Render(int t_x, int t_y, SDL_Rect* t_clip)
{
	SDL_Rect renderFrame = { t_x, t_y, m_imageWidth, m_imageHeight };
	if (t_clip != NULL)
	{
		renderFrame.w = t_clip->w;
		renderFrame.h = t_clip->h;
	}
	SDL_RenderCopy(&m_renderer, m_texture, t_clip, &renderFrame);
}

bool AnimatedSprite::loadFromFile(std::string t_path)
{
	return false;
}


