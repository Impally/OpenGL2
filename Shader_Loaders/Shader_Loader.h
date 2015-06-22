#pragma once
#ifndef SHADER_LOADER_H
#define SHADER_LOADER_H

#include <GL/glew.h>;

namespace Managers
{
	class Shader_Loader
	{
	public:

		//Constructor
		Shader_Loader(const GLchar* vertexSourcePath, const GLchar* fragmentSourcePath);
		//Use program implementation
		void Use();

	private:
		//Program ID
		GLuint Program;
	};
}
#endif