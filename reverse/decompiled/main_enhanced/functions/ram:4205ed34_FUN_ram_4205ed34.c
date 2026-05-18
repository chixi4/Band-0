
undefined4 FUN_ram_4205ed34(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 auStack_14 [2];
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = **(uint **)(param_1 + 0x10);
  auStack_14[0] = 0;
  FUN_ram_4039c11e(auStack_14,(*(uint **)(param_1 + 0x10))[1],4);
  if ((iVar2 == 0) || ((*(uint *)(iVar2 + 0x54) & 2) == 0)) {
    FUN_ram_42052c76(uVar1 & 0xff,auStack_14);
  }
  else {
    if (1 < uVar1) {
      return 0x5001;
    }
    FUN_ram_4209821c(*(undefined4 *)(iVar2 + 0x24),auStack_14,uVar1);
  }
  return 0;
}

