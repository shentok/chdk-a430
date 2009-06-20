#include "platform.h"
#include "keyboard.h"

void *hook_raw_fptr()
{
    return (void*)0x440C0; 
}

void *hook_raw_ret_addr()
{
    return (void*)0xFFD4CBD8; 
}

char *hook_raw_image_addr()
{
    return (char*)(0x10800000+0x41000+0x260);      
}

long hook_raw_size()
{
    return 0x63FF60;       // "CRAW BUF","WBIntegPrm.c" -  1/3" 5 MPix -  (2664*1968*10/8=0x63FF60)  
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

