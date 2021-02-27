#include<SDL.h>
#include<iostream>
#include<SDL_image.h>
#include<string>
const int SCREEN_WIDTH=1200;
const int SCREEN_HEIGHT=600;
enum KeyPressSurfaces
{
    KEY_PRESS_SURFACE_DEFAULT,
    KEY_PRESS_SURFACE_UP,
    KEY_PRESS_SURFACE_DOWN,
    KEY_PRESS_SURFACE_LEFT,
    KEY_PRESS_SURFACE_RIGHT,
    KEY_PRESS_SURFACE_0,
    KEY_PRESS_SURFACE_TOTAL
};
SDL_Texture* loadTexture( std::string path );
SDL_Window* gWindow = NULL;
SDL_Surface* gScreenSurface = NULL;
SDL_Surface* gCurrentSurface = NULL;
SDL_Surface* loadSurface( std::string path );
SDL_Surface* gKeyPressSurfaces[ KEY_PRESS_SURFACE_TOTAL ];
SDL_Event e;
#include"gWindow.h"
#include"load_image.h"
int main( int argc, char* args[] )
{
    //Start up SDL and create window
    if( !init() )
    {
        printf( "Failed to initialize!\n" );
    }
    else
    {
        //Load media
        if( !loadMedia() )
        {
            printf( "Failed to load media!\n" );
        }
        else
        {
            //Apply the image
           quit();
        }
    }

    //Free resources and close SDL
    close();

    return 0;
}

