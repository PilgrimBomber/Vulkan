#version 450

layout( location = 0 ) in vec2 geom_texcoord;
layout( location = 1 ) in vec4 geom_color;

layout( set = 0, binding = 1 ) uniform sampler2D ImageSampler;

layout( location = 0 ) out vec4 frag_color;

void main() {
  
  //if( 0.2 > alpha ) {
  //  discard;
  //}
  vec4 texcolor = texture( ImageSampler, geom_texcoord );
  vec4 color = vec4( 0.35,0.15,0.05, texcolor.a);
  float brightness = (texcolor.r + texcolor.g + texcolor.b)/3;
  //if(texcolor.a>0)frag_color = vec4((color.rgb+ texcolor.rgb)/2,1);
  //else frag_color = vec4((color.rgb+ texcolor.rgb)/2,0);
  frag_color = vec4(color.rgb*brightness, texcolor.a);
}
