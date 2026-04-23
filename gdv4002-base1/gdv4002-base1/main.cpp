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
	// 
	//addObject("player1", glm::vec2(-1.5f, 1.0f), glm::radians(-30.0f), glm::vec2(1.0f, 1.0f), "Resources\\Textures\\bumblebee.png");
	//addObject("player2", glm::vec2(1.5f, 1.0f), glm::radians(45.0f), glm::vec2(1.0f, 1.0f), "Resources\\Textures\\bumblebee.png");
	//float playerVelocity = 2.0f;
	//float anglesPerSecond = glm::radians(45.0f);
	//GameObject2D* player1 = getObject("player1");
	//player1->orientation = player1->orientation + glm::radians(1.5);


	addObject("player", glm::vec2(-1.5f, 0.0f), 0.0f, glm::vec2(0.5f, 0.5f), "Resources\\Textures\\player1_ship.png");

	addObject("enemy", glm::vec2(0.0f, 0.0f), 0.0f, glm::vec2(0.75f, 0.75f), "Resources\\Textures\\alien01.png");

	addObject("enemy", glm::vec2(1.0f, 0.0f), 0.0f, glm::vec2(0.75f, 0.75f), "Resources\\Textures\\alien01.png");

	addObject("enemy", glm::vec2(2.0f, 0.0f), 0.0f, glm::vec2(0.75f, 0.75f), "Resources\\Textures\\alien01.png");

	
	//
	// Set callback functions
	//
	void myUpdate(GLFWwindow * window, double tDelta) 
		
		; float player1RotationSpeed = glm::radians(90.0f);


	// Enter main loop - this handles update and render calls
	engineMainLoop();

	// When we quit (close window for example), clean up engine resources
	engineShutdown();

	// return success :)
	return 0;
}
