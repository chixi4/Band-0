
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40392008(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 auStack_24 [4];
  
  thunk_FUN_ram_40396234();
  auStack_24[0] = 0;
  FUN_ram_403995ec(0,param_1,param_2,param_3,param_4,auStack_24);
  if (param_2 < 0x42000000) {
    if (param_2 < 0x3c000000) goto LAB_ram_40392048;
    uVar1 = 0x3c200000;
    uVar2 = 8;
  }
  else {
    uVar1 = 0x42200000;
    uVar2 = 1;
  }
  if (param_4 + -1 + param_2 < uVar1) {
    _DAT_ram_600c4004 = ~(uVar2 >> 2) & ~(uVar2 & 1) & _DAT_ram_600c4004;
    FUN_ram_40391fe8(param_2,param_4);
    thunk_FUN_ram_40396264();
    return;
  }
LAB_ram_40392048:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

