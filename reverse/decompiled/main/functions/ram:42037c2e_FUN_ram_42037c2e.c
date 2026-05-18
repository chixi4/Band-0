
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42037c2e(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar2 = 0x102;
    }
    else {
      iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xb24))();
      if (iVar1 == 0) {
        *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    return uVar2;
  }
  return 0x102;
}

