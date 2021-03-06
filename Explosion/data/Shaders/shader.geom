#version 450

layout( points ) in;
layout( location = 0 ) in vec4 vert_color[];

layout( set = 0, binding = 0 ) uniform UniformBuffer {
  mat4 ModelViewMatrix;
  mat4 ProjectionMatrix;
};

layout( triangle_strip, max_vertices = 4 ) out;
layout( location = 0 ) out vec2 geom_texcoord;
layout( location = 1 ) out vec4 geom_color;

layout(push_constant) uniform TimeInfo{
    float totalTime;
}timeInfo;


void main() {
  float SIZE =0.3+0.02*timeInfo.totalTime;

  
  vec4 position = gl_in[0].gl_Position;
  
  gl_Position = ProjectionMatrix * (gl_in[0].gl_Position + vec4( -SIZE, SIZE, 0.0, 0.0 ));
  geom_texcoord = vec2( 0, 0 );
  geom_color = vert_color[0];
  EmitVertex();
  
  gl_Position = ProjectionMatrix * (gl_in[0].gl_Position + vec4( -SIZE, -SIZE, 0.0, 0.0 ));
  geom_texcoord = vec2( 0, 1.0 );
  geom_color = vert_color[0];
  EmitVertex();
  
  gl_Position = ProjectionMatrix * (gl_in[0].gl_Position + vec4( SIZE, SIZE, 0.0, 0.0 ));
  geom_texcoord = vec2( 1.0, 0 );
  geom_color = vert_color[0];
  EmitVertex();
  
  gl_Position = ProjectionMatrix * (gl_in[0].gl_Position + vec4( SIZE, -SIZE, 0.0, 0.0 ));
  geom_texcoord = vec2( 1.0, 1.0 );
  geom_color = vert_color[0];
  EmitVertex();

  EndPrimitive();
}
