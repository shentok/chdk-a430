#include "stubs_asm.h"

DEF(physw_status, 0xFC38) //ok
DEF(physw_run,  0x1FAC) //ok
DEF(zoom_busy, 0x7CFD0) //ok
DEF(focus_busy, 0x7D2E8) //ok
DEF(FlashParamsTable,0xFFEADA74)
DEF(canon_menu_active,0x8090) //ok
DEF(canon_ev_corr_menu_active, 0xD5D8)
DEF(canon_shoot_menu_active,0x7605) // (0x7608 - 0x4 + 0x1) found in "taskcreate_DSITask"
DEF(recreview_hold, 0x73DC) // (0x73E0 - 0x4) found in "AR:Snd:0x%04x", LDR R3, =0x73E0;
DEF(movie_status, 0x91D54)
DEF(some_flag_for_af_scan, 0xCF88)
DEF(zoom_status, 0x2658)
