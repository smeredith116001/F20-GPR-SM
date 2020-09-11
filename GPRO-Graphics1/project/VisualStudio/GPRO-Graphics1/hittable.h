/*
	hittable.h
	Code sourced from Ray Tracing in One Weekend Peter Shirley
	edited by Steve Hollasch and Trevor David Black

	Modified by: ____________
	Modified because: ____________
*/

#ifndef HITTABLE_H
#define HITTABLE_H

#include "ray.h"

struct hit_record {
    point3 p;
    vec3 normal;
    double t;
};

class hittable {
public:
    virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const = 0;
};

#endif
