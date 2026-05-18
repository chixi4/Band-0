
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42014258(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = -1;
  if (param_1 < 2) {
    uVar3 = (-(uint)(param_1 != 0) & 0x1c) + 4;
    iVar2 = -1;
    if (((_DAT_ram_600c0018 & uVar3) == 0) && ((uVar3 & _DAT_ram_600c0010) != 0)) {
      iVar1 = param_1 * 0x30 + gp + -0x658;
      FUN_ram_4201b116(iVar1,&uStack_18);
      iVar2 = FUN_ram_4207a30c(uStack_18,0,&uStack_14);
      if (iVar2 == 0) {
        FUN_ram_40394d60();
        FUN_ram_4201b134(iVar1,param_2,uStack_14);
        FUN_ram_40394d8e();
      }
    }
  }
  return iVar2;
}

