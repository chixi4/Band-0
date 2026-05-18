
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203541e(int *param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (7 < param_2) {
    FUN_ram_42033fd8(1,0x400,2,0x3c07f940,param_2);
    return;
  }
  iVar1 = param_1[param_2 + 0x91];
  if (iVar1 != 0) {
    iVar3 = *param_1;
    uVar2 = 0;
    if (iVar3 != _DAT_ram_3fcb4f84) {
      if ((iVar3 == _DAT_ram_3fcb4f88) || (iVar3 == _DAT_ram_3fcb51c4)) {
        uVar2 = *(undefined1 *)((int)param_1 + 0x26);
      }
      else {
        uVar2 = 0;
      }
    }
    FUN_ram_42049dc2(iVar3 != _DAT_ram_3fcb4f84,uVar2,*(undefined1 *)(iVar1 + 0x2f),0,param_1 + 1);
    FUN_ram_420353f4(iVar1);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar1);
    param_1[param_2 + 0x91] = 0;
  }
  return;
}

