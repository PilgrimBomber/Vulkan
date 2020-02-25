#version 450
vec4 vertices[4]={
          {0.5, -0.5, 0.0, 1.0},
          {-0.5, -0.5, 0.0, 1.0},
          {0, 0.5, 0.0, 1.0},
          {0.5, -0.5, 0.0, 1.0}};


void main()
{
	gl_Position = vertices[gl_VertexIndex];
}