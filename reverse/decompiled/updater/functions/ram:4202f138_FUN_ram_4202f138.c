
void FUN_ram_4202f138(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  while( true ) {
    iVar2 = FUN_ram_42024808(param_2,param_3);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_ram_42024808(param_2 + 8,param_3 + 8,(param_5 >> 1 & 0x3f) == uVar1);
    if (iVar2 != 0) break;
    uVar1 = uVar1 + 1 & 0xff;
    param_3 = param_3 + 0x18;
    if (param_4 == uVar1) {
      iVar2 = FUN_ram_4202f0de(param_1,param_2,param_5 >> 7);
      if (iVar2 != 0) {
        return;
      }
      FUN_ram_42024a98(param_2 + 0x10,1);
      return;
    }
  }
  return;
}

