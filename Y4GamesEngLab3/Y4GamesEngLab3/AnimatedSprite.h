#ifndef ANIMATEDSPRITE_H
#define ANIMATEDSPRITE_H

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <vector>


class AnimatedSprite 
{
public:
	AnimatedSprite();
	AnimatedSprite(const SDL_Texture& t_texture);
	AnimatedSprite(const SDL_Texture& t_texture, const SDL_Rect&);

	~AnimatedSprite( );

	const float& getTime();
	const SDL_Rect& getFrame(int);
	const std::vector<SDL_Rect>& getFrames();
	const int GetCurrentFrame();
	void update();

private:
	std::vector<SDL_Rect> m_frames;
	int m_currentFrame;
	float m_time;
	int m_clock;

};

#endif // !ANIMATEDSPRITE_H
