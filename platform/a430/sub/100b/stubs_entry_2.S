#include "stubs_asm.h"

NHSTUB(free, 0xFFEB1EB0)//ok
NHSTUB(SetZoomActuatorSpeedPercent, 0xFFC017E8)//ok, null stub
NHSTUB(VbattGet, 0xFFC1BCA0)//ok


NHSTUB(GetDrive_ClusterSize, 0xFFC5CF80) //ok
NHSTUB(GetDrive_TotalClusters, 0xFFC5CFBC) //ok
NHSTUB(GetDrive_FreeClusters, 0xFFC5CFF8) // ok


NHSTUB(TurnOffMic, 0xFFC1E40C) //ok
NHSTUB(TurnOnMic, 0xFFC1E74C) //ok


NHSTUB(ExpCtrlTool_StopContiAE,  0xFFD0DCE0) 
NHSTUB(ExpCtrlTool_StartContiAE, 0xFFD0DCB0) 
NHSTUB(MakeAFScan,               0xFFE7003C) 
NHSTUB(GetBatteryTemperature, 0xFFDC7D94)
NHSTUB(GetCCDTemperature, 0xFFDC7D80)
NHSTUB(GetOpticalTemperature, 0xFFDC7D6C)
NHSTUB(PT_PlaySound, 0xFFE7AA08)

NHSTUB(EnterToCompensationEVF, 0xffe8b110) // Stub not found. When found, remove dummy function from lib.c.
NHSTUB(ExitFromCompensationEVF, 0xffe8b194) // Stub not found. When found, remove dummy function from lib.c.
NHSTUB(SetAE_ShutterSpeed, 0xFFDE17BC)
NHSTUB(DoAFLock, 0xffe6aedc)
NHSTUB(UnlockAF, 0xffe6af5c)

NHSTUB(kbd_pwr_on, 0xFFC017E8) //wrong, null stub
NHSTUB(kbd_pwr_off, 0xFFC017E8) //wrong, null stub
