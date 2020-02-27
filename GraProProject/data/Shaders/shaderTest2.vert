#version 450

layout(location = 1)out vec4 ocolor;

vec4 vertices[]={
      {0.5, -0.5, 0.0, 1.0},
      {-0.5, -0.5, 0.0, 1.0},
      {0, 0.5, 0.0, 1.0},
	  {0.9,0.9,0,1}};

vec4 colors[]={
	{1,0,0,1},
	{0,1,0,1},
	{0,0,1,1},
	{1,1,0,1}};

void main()
{
	gl_Position = vertices[gl_VertexIndex];
	ocolor = colors[gl_VertexIndex];
}