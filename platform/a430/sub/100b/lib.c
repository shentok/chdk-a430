#include "platform.h"
#include "keyboard.h"

void *hook_raw_fptr()
{
    return (void*)0x34EA4; // found in taskcreate_ImageSensorTask
}

void *hook_raw_ret_addr()
{
    return (void*)0xFFCB30B0; // ok
}

char *hook_raw_image_addr()
{
    return (char*)0x10577E28;  // ok
}

#ifndef CAM_RAW_ROWPIX
#error CAM_RAW_ROWPIX must be defined
#endif
#ifndef CAM_RAW_ROWS
#error CAM_RAW_ROWS must be defined
#endif
#ifndef CAM_SENSOR_BITS_PER_PIXEL
#error CAM_SENSOR_BITS_PER_PIXEL must be defined
#endif

long hook_raw_size()
{
    static const long size = CAM_RAW_ROWPIX*CAM_RAW_ROWS*CAM_SENSOR_BITS_PER_PIXEL/8;
    return size;
}

void *vid_get_viewport_live_fb()
{
    return (void*)0;
}

void *vid_get_bitmap_fb()
{
    return (void*)0x103C79A0; // OK (find in _CreatePhysicalVram)
}

void *vid_get_viewport_fb()
{
    return (void*)0x105F2830; // OK (find on "VRAM Address  : %p")
}

void *vid_get_viewport_fb_d()
{
    return (void*)(*(int*)0x65418); // ?? (found in sub_FFCFA7FC)
}

long vid_get_bitmap_screen_width()
{
    return 360;
}

long vid_get_bitmap_screen_height()
{
    return 240;
}

long vid_get_viewport_height()
{
    return ((mode_get()&MODE_MASK) == MODE_PLAY) ? 240 : 230;
}

char *camera_jpeg_count_str()
{
    return (char*)0x10F70;
} 

long vid_get_bitmap_buffer_width() { return 360; }

long vid_get_bitmap_buffer_height() { return 240; }

