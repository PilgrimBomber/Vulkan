#version 450

layout( location = 0 ) in vec2 geom_texcoord;
layout( location = 1 ) in vec4 geom_color;

layout( set = 0, binding = 1 ) uniform sampler2D ImageSampler;

layout( location = 0 ) out vec4 frag_color;

void main() {
  float alpha = 1.0 - dot( geom_texcoord, geom_texcoord );
  //if( 0.2 > alpha ) {
  //  discard;
  //}
  vec4 texcolor = texture( ImageSampler, geom_texcoord );
  frag_color = vec4( texcolor.rgb, 1 );
}
