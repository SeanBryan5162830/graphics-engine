#pragma once
#include <math.h>

/* vec2 double implementation */
typedef struct vec2 {
    double x, y;
} vec2;

vec2   vec2_create(double x, double y);
void   vec2_add(vec2 *a, vec2 b, vec2 c);
void   vec2_subtract(vec2 *a, vec2 b, vec2 c);
void   vec2_multiply(vec2 *a, vec2 b, vec2 c);
void   vec2_divide(vec2 *a, vec2 b, vec2 c);
double vec2_magnitude(vec2 v);

/* vec2 float implementation */
typedef struct vec2f {
    float x, y;
} vec2f;

vec2f  vec2f_create(float x, float y);
void   vec2f_add(vec2f *a, vec2f b, vec2f c);
void   vec2f_subtract(vec2f *a, vec2f b, vec2f c);
void   vec2f_multiply(vec2f *a, vec2f b, vec2f c);
void   vec2f_divide(vec2f *a, vec2f b, vec2f c);
float  vec2f_magnitude(vec2f v);



/* vec3 double implementation */
typedef struct vec3 {
    double x, y, z;
} vec3;

vec3   vec3_create(double x, double y, double z);
void   vec3_add(vec3 *a, vec3 b, vec3 c);
void   vec3_subtract(vec3 *a, vec3 b, vec3 c);
void   vec3_multiply(vec3 *a, vec3 b, vec3 c);
void   vec3_divide(vec3 *a, vec3 b, vec3 c);
double vec3_magnitude(vec3 v);
double vec3_dot(vec3 a, vec3 b);
void   vec3_cross(vec3 *a, vec3 b, vec3 c);

/* vec3 float implementation */
typedef struct vec3f {
    float x, y, z;
} vec3f;

vec3f vec3f_create(float x, float y, float z);
void  vec3f_add(vec3f *a, vec3f b, vec3f c);
void  vec3f_subtract(vec3f *a, vec3f b, vec3f c);
void  vec3f_multiply(vec3f *a, vec3f b, vec3f c);
void  vec3f_divide(vec3f *a, vec3f b, vec3f c);
float vec3f_magnitude(vec3f v);
float ve3f_dot(vec3f a, vec3f b);
void  vec3f_cross(vec3f *a, vec3f b, vec3f c);



/* vec4 double implementation */
typedef struct vec4 {
    double x, y, z, w;
} vec4;

vec4 vec4_create(double x, double y, double z, double w);
void vec4_add(vec4 *a, vec4 b, vec4 c);
void vec4_subtract(vec4 *a, vec4 b, vec4 c);
void vec4_multiply(vec4 *a, vec4 b, vec4 c);
void vec4_divide(vec4 *a, vec4 b, vec4 c);

/* vec4 float implementation */
typedef struct vec4f {
    float x, y, z, w;
} vec4f;

vec4f vec4f_create(float x, float y, float z, float w);
void  vec4f_add(vec4f *a, vec4f b, vec4f c);
void  vec4f_subtract(vec4f *a, vec4f b, vec4f c);
void  vec4f_multiply(vec4f *a, vec4f b, vec4f c);
void  vec4f_divide(vec4f *a, vec4f b, vec4f c);
void  vec4f_show(vec4f v);
// TODO: implement to string method
char  *vec4f_to_string(vec4f v);



/* mat4 float implementation */
// TODO: implement double mat4
typedef union mat4f mat4f;
union mat4f {
    float elements[4*4];
    vec4f columns[4];
};

mat4f mat4f_identity();
mat4f mat4f_diagonal(float diagonal);
mat4f mat4f_orthographic(float left, float right, float top, float bottom , float near, float far);
mat4f mat4f_perspective(float fov, float aspectRatio, float near, float far);
mat4f mat4f_translation(vec3f translation);
mat4f mat4f_rotation(float angle, vec3f axis);
mat4f mat4f_scale(vec3f scale);
mat4f mat4f_multiply(mat4f m1, mat4f m2);
vec4f mat4f_apply(mat4f m, vec4f v);
void  mat4f_set_diagonal(mat4f *m, float diagonal);
void  mat4f_set_orthographic(mat4f *m, float left, float right, float top, float bottom , float near, float far);
void  mat4f_set_perspective(mat4f *m, float fov, float aspectRatio, float near, float far);
void  mat4f_set_translation(mat4f *m, vec3f translation);
void  mat4f_set_rotation(mat4f *m, float angle, vec3f axis);
void  mat4f_set_scale(mat4f *m, vec3f scale);
void  mat4f_show(mat4f m);

/* helper functions */

float to_radians(float angle);
float map(float value, float low, float high, float new_low, float new_high);
// TODO: Carmack's inverse square root