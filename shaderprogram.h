/*
 * Copyright (c) 2013 Ahmed Samy  <f.fallen45@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef SHADERPROGRAM_H
#define SHADERPROGRAM_H

#include <vector>
#include <string>

class ShaderProgram
{
private:
	GLuint m_programId;
	std::vector<GLuint> m_shaders;

public:
	ShaderProgram();
	~ShaderProgram();

	void create();
	bool compile(const GLenum shaderType, const char *sourceCode);
	bool link();
	void bind();
	std::string log();

	void bindAttribLocation(GLint location, const char *name);
	void setVertexData(GLint attribLocation, const GLvoid *values, GLint size);
	void setProjectionMatrix(const GLfloat *values);
};

#endif
 
