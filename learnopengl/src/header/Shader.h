#pragma once
#include "glad/glad.h"
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
public:
	unsigned int ID;
	Shader(std::string vertexPath, std::string fragmentPath);

	void use();
	void setBool(const std::string shaderVariableName, bool value);
	void setTexture(const std::string shaderVariableName, int textureSlotNumber);
	void setInt(const std::string shaderVariableName, int value);
	void setFloat(const std::string shaderVariableName, float value);
	void setMat4(const std::string shaderVariableName, glm::mat4 matrix);
	void setVec3(const std::string shaderVariableName, float value1, float value2, float valu3);
	void setVec3(const std::string shaderVariableName, glm::vec3 vec);
private:
	void readShaderFileToString(std::string vertexPath, std::string fragmentPath);
	void compileVertexShader(std::string &vShaderString);
	void compileFragmentShader(std::string &fShaderString);
	void linkShaderProgram();
	void deleteShaderSource();
	void checkErrorInformation(GLuint objectID, GLenum pname);

	unsigned int shaderProgram = 0;
	unsigned int fragmentShader = 0;
	unsigned int vertexShader = 0;
	std::string m_vShaderString;
	std::string m_fShaderString;
};