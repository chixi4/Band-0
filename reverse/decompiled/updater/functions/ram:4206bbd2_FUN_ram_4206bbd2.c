
undefined4 FUN_ram_4206bbd2(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_42077b4c(param_1,3,0);
  if (-1 < (int)uVar1) {
    if (param_2 == 0) {
      uVar1 = uVar1 & 0xffffbfff;
    }
    else {
      uVar1 = uVar1 | 0x4000;
    }
    iVar2 = FUN_ram_42077b4c(param_1,4,uVar1);
    if (-1 < iVar2) {
      return 0;
    }
  }
  return 0x8005;
}

