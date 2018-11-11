#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include "image.h"

float get_pixel(image im, int x, int y, int c)
{
    printf("image width: %d\n", im.w);
    printf("image height: %d\n", im.h);
    printf("image channels: %d\n", im.c);

    printf("old x: %d\n", x);
    printf("old y: %d\n", y);
    printf("old c: %d\n", c);

    if (x < 0)
        x = 0;
    if (y < 0)
        y = 0;
    if (x >= im.w)
        x = im.w - 1;
    if (y >= im.h)
        y = im.h;

    printf("new x: %d\n", x);
    printf("new y: %d\n", y);
    printf("new c: %d\n", c);

    int pos = x + y * im.h + c * im.w * im.h;
    printf("position: %d\n", pos);
    printf("pixel value: %.3f\n\n\n", im.data[pos]);

    return im.data[pos];
}

void set_pixel(image im, int x, int y, int c, float v)
{
    // TODO Fill this in
}

image copy_image(image im)
{
    image copy = make_image(im.w, im.h, im.c);
    // TODO Fill this in
    return copy;
}

image rgb_to_grayscale(image im)
{
    assert(im.c == 3);
    image gray = make_image(im.w, im.h, 1);
    // TODO Fill this in
    return gray;
}

void shift_image(image im, int c, float v)
{
    // TODO Fill this in
}

void clamp_image(image im)
{
    // TODO Fill this in
}

// These might be handy
float three_way_max(float a, float b, float c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

float three_way_min(float a, float b, float c)
{
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

void rgb_to_hsv(image im)
{
    // TODO Fill this in
}

void hsv_to_rgb(image im)
{
    // TODO Fill this in
}
