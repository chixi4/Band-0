
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4203ca50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,int param_6)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int unaff_s2;
  
  if (unaff_s1 == 0) {
    pcVar4 = *(code **)(param_5 + unaff_s0 + -0x684);
    iVar1 = (*pcVar4)(iRamffffff64 + 0x38,4,(uint)(param_6 * 0x430000) >> 0x10,param_4,pcVar4);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)(unaff_s2 + -0x134) + unaff_s0 + -0x684))
                        (iRamffffff64 + 0x4c,0x1c,1);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*(int *)(unaff_s2 + -0x134) + unaff_s0 + -0x684))
                          (iRamffffff64 + 0x50,0xc,1);
        if (iVar1 == 0) {
          uVar2 = (uint)*(ushort *)(_DAT_ram_3fcb6a18 + 6);
          pcVar4 = *(code **)(unaff_s0 + *(int *)(unaff_s2 + -0x134) + -0x684);
          if ((*(ushort *)(_DAT_ram_3fcb6a18 + 6) & 3) == 0) {
            uVar3 = uVar2 + 0x3f;
          }
          else {
            uVar3 = (uVar2 & 0xfffffffc) + 0x43;
          }
          iVar1 = (*pcVar4)(iRamffffff64 + 0x54,4,
                            (uVar3 >> 2) * (uint)*(byte *)(_DAT_ram_3fcb6a18 + 4) & 0xffff,uVar2 & 3
                            ,(uint)*(byte *)(_DAT_ram_3fcb6a18 + 4),pcVar4);
          param_1 = 0;
          if (iVar1 != 0) {
            param_1 = 0xfffffff8;
          }
        }
        else {
          param_1 = 0xfffffff9;
        }
      }
      else {
        param_1 = 0xfffffffa;
      }
    }
    else {
      param_1 = 0xfffffffb;
    }
  }
  return param_1;
}

