
undefined4 FUN_ram_420a2554(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_420b1038(param_1,3,0);
  if (-1 < (int)uVar1) {
    if (param_2 == 0) {
      uVar1 = uVar1 & 0xffffbfff;
    }
    else {
      uVar1 = uVar1 | 0x4000;
    }
    iVar2 = FUN_ram_420b1038(param_1,4,uVar1);
    if (-1 < iVar2) {
      return 0;
    }
  }
  return 0x8005;
}

