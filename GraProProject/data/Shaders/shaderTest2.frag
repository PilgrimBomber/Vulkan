#version 450
layout(location = 1) in vec4 colorPos;
layout( location = 0 ) out vec4 frag_color;

void main() {
  frag_color = vec4( colorPos.x, colorPos.y, 1, 1.0 );
}
