#include "GLRenderCore.h"
#include "Texture.h"

int main()
{
	GLRenderCore glrcore;
	glrcore.Init();
	glrcore.SetShader("./src/GLSL/vShader.vert", "./src/GLSL/fShader.frag");
	glrcore.AddTexture("./resources/textures/container.jpg", GL_RGB);
	glrcore.AddTexture("./resources/textures/awesomeface.png", GL_RGBA);
	glrcore.enableDepthTest();
	glrcore.Run();

    return 0;
}


