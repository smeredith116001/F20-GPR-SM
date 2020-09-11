/*
    sphere.h
    Code sourced from Ray Tracing in One Weekend Peter Shirley
    edited by Steve Hollasch and Trevor David Black

    Modified by: ____________
    Modified because: ____________
*/

#ifndef SPHERE_H
#define SPHERE_H
//includes
#include "hittable.h"
#include "vec3.h"
//Class for spheres being able to be hit by rays
class sphere : public hittable {
public:
    sphere() {}
    sphere(point3 cen, double r) : center(cen), radius(r) {};

    virtual bool hit(
        const ray& r, double tmin, double tmax, hit_record& rec) const override;

public:
    point3 center;
    double radius;
};
//Determining whether they hit or not
bool sphere::hit(const ray& r, double t_min, double t_max, hit_record& rec) const {
    double oc = r.origin() - center;
    double a = r.direction().length_squared();
    float half_b = dot(oc, r.direction());
    double c = oc.length_squared() - radius * radius;
    double discriminant = half_b * half_b - a * c;

    if (discriminant > 0) {
        float root = sqrt(discriminant);

        double temp = (-half_b - root) / a;
        if (temp < t_max && temp > t_min) {
            rec.t = temp;
            rec.p = r.at(rec.t);
            rec.normal = (rec.p - center) / radius;
            return true;
        }

        temp = (-half_b + root) / a;
        if (temp < t_max && temp > t_min) {
            rec.t = temp;
            rec.p = r.at(rec.t);
            rec.normal = (rec.p - center) / radius;
            return true;
        }
    }

    return false;
}


#endif