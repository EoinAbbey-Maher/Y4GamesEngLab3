#include "AnimatedSprite.h"
#include "Debug.h"


AnimatedSprite::~AnimatedSprite()
{
}

AnimatedSprite::AnimatedSprite()
{
	m_currentFrame = 0;
}

AnimatedSprite::AnimatedSprite(SDL_Texture& t_texture) :
	m_texture(&t_texture), 
	m_currentFrame(0) 
{
	
}	

AnimatedSprite::AnimatedSprite(SDL_Texture& t_texture, const SDL_Rect& t_Rect) : 
	m_texture(&t_texture), 
	m_currentFrame(0) 
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
	return m_frames[t_n];
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

void AnimatedSprite::setTexture(SDL_Texture& t_texture)
{
	m_texture = &t_texture;
}

void AnimatedSprite::setRenderer(SDL_Renderer& t_render)
{
	m_renderer = &t_render;
}


void AnimatedSprite::setRect(const SDL_Rect& t_rect)
{
}

int AnimatedSprite::getWidth()
{
	return m_imageWidth;
}

int AnimatedSprite::getHeight()
{
	return m_imageHeight;
}

void AnimatedSprite::Render()
{
	SDL_Rect renderFrame = getFrame(m_currentFrame);
		renderFrame.y = 32 * m_yPos;
		renderFrame.w = 32;
		renderFrame.h = 32;
	SDL_RenderCopy(m_renderer, m_texture, &renderFrame , NULL);
}

bool AnimatedSprite::loadFromFile(const char * t_path)
{
	DEBUG_MSG("loading Texture")
	m_surface= SDL_LoadBMP(t_path);
	m_texture = SDL_CreateTextureFromSurface(m_renderer, m_surface);
	SDL_FreeSurface(m_surface);

	if (m_texture == NULL)
	{
		DEBUG_MSG("Texture Failed")
	}

	DEBUG_MSG("Texture Success")
	return true;
}


