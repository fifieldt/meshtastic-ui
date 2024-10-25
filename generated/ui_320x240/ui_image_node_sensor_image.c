#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_NODE_SENSOR_IMAGE
#define LV_ATTRIBUTE_IMG_NODE_SENSOR_IMAGE
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_NODE_SENSOR_IMAGE
uint8_t img_node_sensor_image_map[] = {

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xdb,0xdb,0x00,0xd5,0xd5,0xd5,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xe2,0xe2,0xe2,0x00,0xd8,0xd8,0xd8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd8,0xd8,0xd8,0x00,0xe2,0xe2,0xe2,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xd5,0xd5,0xd5,0x00,0xdb,0xdb,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xd8,0xd8,0xd8,0x00,0xcd,0xcd,0xcd,0x00,0xe2,0xe2,0xe2,0x00,0xde,0xde,0xde,0x17,0xde,0xde,0xde,0x13,0xe1,0xe1,0xe1,0x00,0xe8,0xe8,0xe8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe7,0xe7,0xe7,0x00,0xe1,0xe1,0xe1,0x00,0xde,0xde,0xde,0x13,0xde,0xde,0xde,0x17,0xe2,0xe2,0xe2,0x00,0xcd,0xcd,0xcd,0x00,0xd8,0xd8,0xd8,0x00,0x00,0x00,0x00,0x00,
    0x8c,0x8c,0x8c,0x00,0xe2,0xe2,0xe2,0x00,0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x33,0xe0,0xe0,0xe0,0xcc,0xdf,0xdf,0xdf,0xab,0xdd,0xdd,0xdd,0x0a,0xdd,0xdd,0xdd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdd,0xdd,0xdd,0x00,0xdd,0xdd,0xdd,0x0a,0xdf,0xdf,0xdf,0xab,0xe0,0xe0,0xe0,0xcc,0xde,0xde,0xde,0x33,0xe0,0xe0,0xe0,0x00,0xe2,0xe2,0xe2,0x00,0x8d,0x8d,0x8d,0x00,
    0xdc,0xdc,0xdc,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x19,0xe0,0xe0,0xe0,0xc2,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0xa4,0xdd,0xdd,0xdd,0x07,0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x00,0xe1,0xe1,0xe1,0x00,0xd6,0xd6,0xd6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd6,0xd6,0xd6,0x00,0xe1,0xe1,0xe1,0x00,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x00,0xdd,0xdd,0xdd,0x07,0xdf,0xdf,0xdf,0xa4,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xc2,0xde,0xde,0xde,0x19,0xde,0xde,0xde,0x00,0xdc,0xdc,0xdc,0x00,
    0xdb,0xdb,0xdb,0x00,0xff,0xff,0xff,0x00,0xdf,0xdf,0xdf,0x83,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xc6,0xde,0xde,0xde,0x1d,0xd9,0xd9,0xd9,0x02,0xdf,0xdf,0xdf,0x34,0xde,0xde,0xde,0x1b,0xe0,0xe0,0xe0,0x00,0xce,0xce,0xce,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xcd,0xcd,0xcd,0x00,0xe0,0xe0,0xe0,0x00,0xde,0xde,0xde,0x1b,0xdf,0xdf,0xdf,0x34,0xd9,0xd9,0xd9,0x02,0xde,0xde,0xde,0x1d,0xe0,0xe0,0xe0,0xc6,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x83,0xff,0xff,0xff,0x00,0xdb,0xdb,0xdb,0x00,
    0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x27,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xf3,0xdf,0xdf,0xdf,0x47,0xe1,0xe1,0xe1,0x00,0xdf,0xdf,0xdf,0x62,0xe0,0xe0,0xe0,0xf0,0xdf,0xdf,0xdf,0x9c,0xd7,0xd7,0xd7,0x02,0xdc,0xdc,0xdc,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xdc,0xdc,0xdc,0x00,0xd7,0xd7,0xd7,0x02,0xdf,0xdf,0xdf,0x9c,0xe0,0xe0,0xe0,0xf0,0xdf,0xdf,0xdf,0x62,0xe1,0xe1,0xe1,0x00,0xdf,0xdf,0xdf,0x47,0xe0,0xe0,0xe0,0xf3,0xe0,0xe0,0xe0,0xe2,0xde,0xde,0xde,0x27,0xdf,0xdf,0xdf,0x00,
    0xe1,0xe1,0xe1,0x00,0xdf,0xdf,0xdf,0x6e,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xad,0xd9,0xd9,0xd9,0x03,0xde,0xde,0xde,0x2b,0xe0,0xe0,0xe0,0xe1,0xe0,0xe0,0xe0,0xfc,0xdf,0xdf,0xdf,0x6d,0xe2,0xe2,0xe2,0x00,0xd6,0xd6,0xd6,0x02,0xde,0xde,0xde,0x17,0xde,0xde,0xde,0x17,0xd6,0xd6,0xd6,0x02,0xe2,0xe2,0xe2,0x00,0xdf,0xdf,0xdf,0x6d,0xe0,0xe0,0xe0,0xfc,0xe0,0xe0,0xe0,0xe1,0xde,0xde,0xde,0x2b,0xd9,0xd9,0xd9,0x03,0xe0,0xe0,0xe0,0xad,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x6e,0xe1,0xe1,0xe1,0x00,
    0xdb,0xdb,0xdb,0x05,0xe0,0xe0,0xe0,0xab,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x61,0xe2,0xe2,0xe2,0x00,0xdf,0xdf,0xdf,0x86,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0xa6,0xdb,0xdb,0xdb,0x06,0xde,0xde,0xde,0x14,0xdf,0xdf,0xdf,0x8c,0xe0,0xe0,0xe0,0xd8,0xe0,0xe0,0xe0,0xd8,0xdf,0xdf,0xdf,0x8c,0xde,0xde,0xde,0x14,0xdb,0xdb,0xdb,0x06,0xdf,0xdf,0xdf,0xa6,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x86,0xe2,0xe2,0xe2,0x00,0xdf,0xdf,0xdf,0x61,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xab,0xdb,0xdb,0xdb,0x04,
    0xde,0xde,0xde,0x15,0xe0,0xe0,0xe0,0xcf,0xe0,0xe0,0xe0,0xf2,0xdf,0xdf,0xdf,0x33,0xdd,0xdd,0xdd,0x09,0xe0,0xe0,0xe0,0xc5,0xe0,0xe0,0xe0,0xfb,0xdf,0xdf,0xdf,0x49,0xe5,0xe5,0xe5,0x00,0xdf,0xdf,0xdf,0x8c,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xf3,0xe0,0xe0,0xe0,0xf3,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x8c,0xe5,0xe5,0xe5,0x00,0xdf,0xdf,0xdf,0x49,0xe0,0xe0,0xe0,0xfb,0xe0,0xe0,0xe0,0xc5,0xdd,0xdd,0xdd,0x09,0xdf,0xdf,0xdf,0x33,0xe0,0xe0,0xe0,0xf2,0xe0,0xe0,0xe0,0xcf,0xde,0xde,0xde,0x15,
    0xde,0xde,0xde,0x20,0xe0,0xe0,0xe0,0xde,0xe0,0xe0,0xe0,0xe5,0xdf,0xdf,0xdf,0x20,0xde,0xde,0xde,0x19,0xe0,0xe0,0xe0,0xde,0xe0,0xe0,0xe0,0xe7,0xdf,0xdf,0xdf,0x22,0xde,0xde,0xde,0x15,0xe0,0xe0,0xe0,0xd8,0xe0,0xe0,0xe0,0xf3,0xdf,0xdf,0xdf,0x51,0xdf,0xdf,0xdf,0x51,0xe0,0xe0,0xe0,0xf3,0xe0,0xe0,0xe0,0xd8,0xde,0xde,0xde,0x15,0xdf,0xdf,0xdf,0x22,0xe0,0xe0,0xe0,0xe7,0xe0,0xe0,0xe0,0xde,0xde,0xde,0xde,0x19,0xdf,0xdf,0xdf,0x20,0xe0,0xe0,0xe0,0xe5,0xe0,0xe0,0xe0,0xde,0xde,0xde,0xde,0x20,
    0xde,0xde,0xde,0x20,0xe0,0xe0,0xe0,0xde,0xe0,0xe0,0xe0,0xe5,0xdf,0xdf,0xdf,0x20,0xde,0xde,0xde,0x19,0xe0,0xe0,0xe0,0xde,0xe0,0xe0,0xe0,0xe7,0xdf,0xdf,0xdf,0x22,0xde,0xde,0xde,0x15,0xe0,0xe0,0xe0,0xd8,0xe0,0xe0,0xe0,0xf3,0xdf,0xdf,0xdf,0x51,0xdf,0xdf,0xdf,0x51,0xe0,0xe0,0xe0,0xf3,0xe0,0xe0,0xe0,0xd8,0xde,0xde,0xde,0x15,0xdf,0xdf,0xdf,0x22,0xe0,0xe0,0xe0,0xe7,0xe0,0xe0,0xe0,0xde,0xde,0xde,0xde,0x19,0xdf,0xdf,0xdf,0x20,0xe0,0xe0,0xe0,0xe5,0xe0,0xe0,0xe0,0xde,0xde,0xde,0xde,0x20,
    0xde,0xde,0xde,0x15,0xe0,0xe0,0xe0,0xcf,0xe0,0xe0,0xe0,0xf2,0xdf,0xdf,0xdf,0x33,0xdd,0xdd,0xdd,0x09,0xe0,0xe0,0xe0,0xc5,0xe0,0xe0,0xe0,0xfb,0xdf,0xdf,0xdf,0x49,0xe5,0xe5,0xe5,0x00,0xdf,0xdf,0xdf,0x8c,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xf3,0xe0,0xe0,0xe0,0xf3,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x8c,0xe5,0xe5,0xe5,0x00,0xdf,0xdf,0xdf,0x49,0xe0,0xe0,0xe0,0xfb,0xe0,0xe0,0xe0,0xc5,0xdd,0xdd,0xdd,0x09,0xdf,0xdf,0xdf,0x33,0xe0,0xe0,0xe0,0xf2,0xe0,0xe0,0xe0,0xcf,0xde,0xde,0xde,0x15,
    0xdb,0xdb,0xdb,0x05,0xe0,0xe0,0xe0,0xab,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x61,0xe2,0xe2,0xe2,0x00,0xdf,0xdf,0xdf,0x86,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0xa6,0xdb,0xdb,0xdb,0x06,0xde,0xde,0xde,0x14,0xdf,0xdf,0xdf,0x8c,0xe0,0xe0,0xe0,0xd8,0xe0,0xe0,0xe0,0xd8,0xdf,0xdf,0xdf,0x8c,0xde,0xde,0xde,0x14,0xdb,0xdb,0xdb,0x06,0xdf,0xdf,0xdf,0xa6,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x86,0xe2,0xe2,0xe2,0x00,0xdf,0xdf,0xdf,0x61,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xab,0xdb,0xdb,0xdb,0x04,
    0xe1,0xe1,0xe1,0x00,0xdf,0xdf,0xdf,0x6e,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xad,0xd9,0xd9,0xd9,0x03,0xde,0xde,0xde,0x2b,0xe0,0xe0,0xe0,0xe1,0xe0,0xe0,0xe0,0xfc,0xdf,0xdf,0xdf,0x6d,0xe2,0xe2,0xe2,0x00,0xd6,0xd6,0xd6,0x02,0xde,0xde,0xde,0x17,0xde,0xde,0xde,0x17,0xd6,0xd6,0xd6,0x02,0xe2,0xe2,0xe2,0x00,0xdf,0xdf,0xdf,0x6d,0xe0,0xe0,0xe0,0xfc,0xe0,0xe0,0xe0,0xe1,0xde,0xde,0xde,0x2b,0xd9,0xd9,0xd9,0x03,0xe0,0xe0,0xe0,0xad,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x6e,0xe1,0xe1,0xe1,0x00,
    0xdf,0xdf,0xdf,0x00,0xde,0xde,0xde,0x27,0xe0,0xe0,0xe0,0xe2,0xe0,0xe0,0xe0,0xf3,0xdf,0xdf,0xdf,0x47,0xe1,0xe1,0xe1,0x00,0xdf,0xdf,0xdf,0x62,0xe0,0xe0,0xe0,0xf0,0xdf,0xdf,0xdf,0x9c,0xd7,0xd7,0xd7,0x02,0xdc,0xdc,0xdc,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xdc,0xdc,0xdc,0x00,0xd7,0xd7,0xd7,0x02,0xdf,0xdf,0xdf,0x9c,0xe0,0xe0,0xe0,0xf0,0xdf,0xdf,0xdf,0x62,0xe1,0xe1,0xe1,0x00,0xdf,0xdf,0xdf,0x47,0xe0,0xe0,0xe0,0xf3,0xe0,0xe0,0xe0,0xe2,0xde,0xde,0xde,0x27,0xdf,0xdf,0xdf,0x00,
    0xdb,0xdb,0xdb,0x00,0xff,0xff,0xff,0x00,0xdf,0xdf,0xdf,0x83,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xc6,0xde,0xde,0xde,0x1d,0xd9,0xd9,0xd9,0x02,0xdf,0xdf,0xdf,0x34,0xde,0xde,0xde,0x1b,0xe0,0xe0,0xe0,0x00,0xce,0xce,0xce,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xce,0xce,0xce,0x00,0xe0,0xe0,0xe0,0x00,0xde,0xde,0xde,0x1b,0xdf,0xdf,0xdf,0x34,0xd9,0xd9,0xd9,0x02,0xde,0xde,0xde,0x1d,0xe0,0xe0,0xe0,0xc6,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0x83,0xff,0xff,0xff,0x00,0xdb,0xdb,0xdb,0x00,
    0xdc,0xdc,0xdc,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x19,0xe0,0xe0,0xe0,0xc2,0xe0,0xe0,0xe0,0xff,0xdf,0xdf,0xdf,0xa4,0xdd,0xdd,0xdd,0x07,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x00,0xe1,0xe1,0xe1,0x00,0xd6,0xd6,0xd6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd6,0xd6,0xd6,0x00,0xe1,0xe1,0xe1,0x00,0xdf,0xdf,0xdf,0x00,0xdf,0xdf,0xdf,0x00,0xdd,0xdd,0xdd,0x07,0xdf,0xdf,0xdf,0xa4,0xe0,0xe0,0xe0,0xff,0xe0,0xe0,0xe0,0xc2,0xde,0xde,0xde,0x19,0xde,0xde,0xde,0x00,0xdc,0xdc,0xdc,0x00,
    0x8c,0x8c,0x8c,0x00,0xe2,0xe2,0xe2,0x00,0xe0,0xe0,0xe0,0x00,0xdf,0xdf,0xdf,0x33,0xe0,0xe0,0xe0,0xcc,0xdf,0xdf,0xdf,0xab,0xdd,0xdd,0xdd,0x0a,0xdd,0xdd,0xdd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdd,0xdd,0xdd,0x00,0xdd,0xdd,0xdd,0x0a,0xdf,0xdf,0xdf,0xab,0xe0,0xe0,0xe0,0xcc,0xde,0xde,0xde,0x33,0xe0,0xe0,0xe0,0x00,0xe2,0xe2,0xe2,0x00,0x8d,0x8d,0x8d,0x00,
    0x00,0x00,0x00,0x00,0xd8,0xd8,0xd8,0x00,0xcd,0xcd,0xcd,0x00,0xe2,0xe2,0xe2,0x00,0xde,0xde,0xde,0x17,0xde,0xde,0xde,0x13,0xe1,0xe1,0xe1,0x00,0xe8,0xe8,0xe8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe8,0xe8,0xe8,0x00,0xe1,0xe1,0xe1,0x00,0xde,0xde,0xde,0x13,0xde,0xde,0xde,0x17,0xe2,0xe2,0xe2,0x00,0xcd,0xcd,0xcd,0x00,0xd8,0xd8,0xd8,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xdb,0xdb,0x00,0xd5,0xd5,0xd5,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xe2,0xe2,0xe2,0x00,0xd8,0xd8,0xd8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd8,0xd8,0xd8,0x00,0xe2,0xe2,0xe2,0x00,0xde,0xde,0xde,0x00,0xde,0xde,0xde,0x00,0xd5,0xd5,0xd5,0x00,0xdb,0xdb,0xdb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t img_node_sensor_image = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_ARGB8888,
  .header.flags = 0,
  .header.w = 24,
  .header.h = 24,
  .header.stride = 96,
  .data_size = sizeof(img_node_sensor_image_map),
  .data = img_node_sensor_image_map,
};

