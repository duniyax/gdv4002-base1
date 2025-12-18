#include "Engine.h"


// Function prototypes


// Global Variables


int main(void) {

	// Initialise the engine (create window, setup OpenGL backend)
	int initResult = engineInit("GDV4002 - Applied Maths for Games", 1024, 1024);

	// If the engine initialisation failed report error and exit
	if (initResult != 0) {

		printf("Cannot setup game window!!!\n");
		return initResult; // exit if setup failed
	}

	//
	// Setup game scene objects here
	//
	addObject("player", glm::vec2(1.0f, 1.0f), glm::radians(45.0f), glm::vec2(0.5f, 1.0f), "Resources\\Textures\\mcblock01.png", TextureProperties::NearestFilterTexture());
	
	
	//
	// Set callback functions
	//
	

	// Enter main loop - this handles update and render calls
	engineMainLoop();

	// When we quit (close window for example), clean up engine resources
	engineShutdown();

	// return success :)
	return 0;
}
