#pragma once

//#include <QString>
#include <string>

class Shader
{
public:
	Shader() {}

	unsigned int createProgram(const std::string& vertex_file, const std::string& fragment_file);
	unsigned int createProgram(const std::string& vertex_file, const std::string& geometry_file, const std::string& fragment_file);

private:
	void loadTextFile(const std::string& filename, std::string& str);
	GLuint compileShader(const std::string& source, GLuint mode);

private:
	GLuint program;
	GLuint vertex_shader;
	GLuint geometry_shader;
	GLuint fragment_shader;
};

