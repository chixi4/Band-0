
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40392008(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint extraout_a4;
  uint uVar3;
  undefined4 auStack_24 [4];
  
  thunk_FUN_ram_40396234();
  auStack_24[0] = 0;
  FUN_ram_403995ec(0,param_1,param_2,param_3,param_4,auStack_24);
  uVar2 = param_4 + -1 + param_2;
  if (param_2 < 0x42000000) goto LAB_ram_4039204c;
  uVar3 = 1;
  uVar1 = 0x42200000;
  while (uVar1 <= uVar2) {
    do {
      FUN_ram_4039bf1e();
      uVar2 = extraout_a4;
LAB_ram_4039204c:
    } while (param_2 < 0x3c000000);
    uVar3 = 8;
    uVar1 = 0x3c200000;
  }
  _DAT_ram_600c4004 = ~(uVar3 >> 2) & ~(uVar3 & 1) & _DAT_ram_600c4004;
  FUN_ram_40391fe8(param_2,param_4);
  thunk_FUN_ram_40396264();
  return;
}

