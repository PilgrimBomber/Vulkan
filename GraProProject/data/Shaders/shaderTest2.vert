#version 450
vec4 vertices[]={
          {0.5, -0.5, 0.0, 1.0},
          {-0.5, -0.5, 0.0, 1.0},
          {0, 0.5, 0.0, 1.0},
	  {0.3,1,0,1}};

layout(location = 1)out vec4 colorPos;
void main()
{
	gl_Position = vertices[gl_VertexIndex];
	colorPos=vertices[gl_VertexIndex];
}