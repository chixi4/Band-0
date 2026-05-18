
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_403a1200(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*_DAT_ram_3fcb83a4)(param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = 0x106;
  }
  else {
    (*_DAT_ram_3fcb8390)();
    for (; param_4 != 0; param_4 = param_4 - iVar1) {
      if ((param_3 & 0x3f) == 0) {
        iVar1 = 0x40;
        if (param_4 < 0x40) {
LAB_ram_403a1258:
          iVar1 = (uint)(0x1f < param_4) * 0x10 + 0x10;
        }
      }
      else {
        iVar1 = 0x10;
        if ((param_3 & 0x1f) == 0) goto LAB_ram_403a1258;
      }
      (*_DAT_ram_3fcb8398)(param_3,param_2,iVar1);
      iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))(param_1,0);
      if (iVar2 != 0) {
        return iVar2;
      }
      (*_DAT_ram_3fcb839c)();
      iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x44))(param_1,param_2,param_3,param_4);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x54))
                        (param_1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x10));
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = param_2 + iVar1;
      (*_DAT_ram_3fcb83a0)();
      param_3 = param_3 + iVar1;
    }
    (*_DAT_ram_3fcb8394)();
    iVar1 = 0;
  }
  return iVar1;
}

