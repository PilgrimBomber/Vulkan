#version 450
layout (points) in;
layout (triangle_strip, max_vertices = 3) out;
layout (location = 1)in vec4 ocolor[];
layout (location = 2)out vec4 nColor;

void main() {    
    gl_Position = gl_in[0].gl_Position + vec4(-0.1, 0.0, 0.0, 0.0); 
    nColor= ocolor[0];
    EmitVertex();

    gl_Position = gl_in[0].gl_Position + vec4(0.05, 0.1, 0.0, 0.0);
    nColor= ocolor[0]*0.2;
    EmitVertex();

    gl_Position = gl_in[0].gl_Position + vec4( 0.05, -0.1, 0.0, 0.0);
    nColor= ocolor[0]*0.6;
    EmitVertex();

    
    
    EndPrimitive();
}  