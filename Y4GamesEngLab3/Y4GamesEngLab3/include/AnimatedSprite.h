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
	AnimatedSprite( SDL_Texture& t_texture);
	AnimatedSprite(SDL_Texture& t_texture, const SDL_Rect&);

	~AnimatedSprite( );



	const int& getClock();
	const float& getTime();
	const SDL_Rect& getFrame(int);
	const std::vector<SDL_Rect>& getFrames();
	const SDL_Rect& getIntRect();
	const int GetCurrentFrame();
	void addFrame(SDL_Rect&);
	void update();
	


	void setTexture(SDL_Texture& t_texture);
	void setRenderer(SDL_Renderer& t_render);
	void setRect(const SDL_Rect& t_rect);

	bool loadFromFile(const char* t_path);
	int getWidth();
	int getHeight();
	void Render();

	int m_yPos{ 0 };

private:

	SDL_Texture* m_texture;
	SDL_Surface* m_surface;
	int m_imageWidth{ 65};
	int m_imageHeight{ 66 };

	SDL_Renderer* m_renderer = nullptr;

	SDL_Rect m_intRect{ 0,0,75,32 };
	std::vector<SDL_Rect> m_frames;
	int m_currentFrame;
	float m_time{ 2000.0f};
	int m_clock;

};

#endif // !ANIMATEDSPRITE_H
