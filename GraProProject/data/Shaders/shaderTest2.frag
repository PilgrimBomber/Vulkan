#version 450

layout( location = 0 ) out vec4 frag_color;
layout( location = 2) in vec4 nColor;

void main() {
  frag_color = nColor;
}
