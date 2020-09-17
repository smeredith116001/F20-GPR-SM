/*
    ray.h
    Code sourced from Ray Tracing in One Weekend Peter Shirley
    edited by Steve Hollasch and Trevor David Black

    Modified by: Sebastian Meredith
*/

#ifndef RAY_H
#define RAY_H
//includes
#include "vec3.h"
//Ray Class for independent rays
class ray {
public:
    ray() {}
    ray(const point3& origin, const vec3& direction)
        : orig(origin), dir(direction)
    {}

    point3 origin() const { return orig; }
    vec3 direction() const { return dir; }

    point3 at(double t) const {
        return orig + t * dir;
    }

public:
    point3 orig;
    vec3 dir;
};

#endif
