/*
	color.h
	Code sourced from Ray Tracing in One Weekend Peter Shirley
	edited by Steve Hollasch and Trevor David Black

	Modified by: ____________
	Modified because: ____________
*/

#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>

void write_color(std::ostream& out, color pixel_color) {
    // Write the translated [0,255] value of each color component.
    out << static_cast<int>(255.999 * pixel_color.x()) << ' '
        << static_cast<int>(255.999 * pixel_color.y()) << ' '
        << static_cast<int>(255.999 * pixel_color.z()) << '\n';
};

#endif
