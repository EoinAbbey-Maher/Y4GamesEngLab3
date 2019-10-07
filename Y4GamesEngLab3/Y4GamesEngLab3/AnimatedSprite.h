#ifndef ANIMATEDSPRITE_H
#define ANIMATEDSPRITE_H

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <vector>


class AnimatedSprite 
{
public:
	AnimatedSprite(SDL_Renderer& t_renderer);
	AnimatedSprite( SDL_Texture& t_texture, SDL_Renderer& t_renderer);
	AnimatedSprite(SDL_Texture& t_texture, const SDL_Rect&, SDL_Renderer& t_renderer);

	~AnimatedSprite( );

	const int& getClock();
	const float& getTime();
	const SDL_Rect& getFrame(int);
	const std::vector<SDL_Rect>& getFrames();
	const SDL_Rect& getIntRect();
	const int GetCurrentFrame();
	void addFrame(SDL_Rect&);
	void update();
	
	void setRect(const SDL_Rect& t_rect);

	bool loadFromFile(std::string t_path);
	int getWidth();
	int getHeight();
	void Render(int t_x, int t_y, SDL_Rect* t_clip = NULL);

private:

	SDL_Texture* m_texture;
	int m_imageWidth;
	int m_imageHeight;

	SDL_Renderer& m_renderer;

	SDL_Rect m_intRect{ 0,0,32,32 };
	std::vector<SDL_Rect> m_frames;
	int m_currentFrame;
	float m_time;
	int m_clock;

};

#endif // !ANIMATEDSPRITE_H
