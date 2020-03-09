#version 450

layout( location = 0 ) in vec2 geom_texcoord;
layout( location = 1 ) in vec4 geom_color;

layout( set = 0, binding = 1 ) uniform sampler2D ImageSampler;

layout( location = 0 ) out vec4 frag_color;
layout(push_constant) uniform TimeInfo{
    float totalTime;
}timeInfo;

void main() {
  
  float blend = (4-timeInfo.totalTime)/4;
  if(blend<0)
  {
    discard;
  }
  float fade = blend * (geom_color.a-0.5);
  vec4 texcolor = texture( ImageSampler, geom_texcoord );
  vec4 color = vec4( 0.35,0.15,0.05, texcolor.a);
  float brightness = (texcolor.r + texcolor.g + texcolor.b)/4;
  vec4 blendcolor;
  if(blend<0.4) blendcolor  = mix(color,vec4(0.5,0.5,0.5,1),1-((blend)/0.4));
  else blendcolor = color;
  frag_color = vec4(blendcolor.rgb*brightness, texcolor.a*fade);
}
