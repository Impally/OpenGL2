// Vertex shader:
// ================
#version 330 core
layout(location = 0) in vec3 position;
layout(location = 1) in vec2 texCoords;

out vec2 TexCoords;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
	gl_Position = projection * view * model * vec4(position.x, position.y-1.2, position.z+1, 1.0f);
	TexCoords = texCoords;
}