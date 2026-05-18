
undefined4 FUN_ram_4207a102(int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0x2f25000) {
    return 1;
  }
  if (iVar1 < 0x2f25001) {
    if (iVar1 == 0xf25000) {
      return 0;
    }
    if (iVar1 == 0x1f25000) {
      uVar2 = 5;
LAB_ram_4207a15a:
      *param_2 = uVar2;
      return 6;
    }
  }
  else {
    if (iVar1 == 0x4f25000) {
      return 3;
    }
    if (iVar1 == 0x5f25000) {
      uVar2 = 0xd;
      goto LAB_ram_4207a15a;
    }
  }
  return 0x20;
}

