
int FUN_ram_420a8b50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar1 = FUN_ram_4206f68c(uVar3);
  if (param_6 < uVar1) {
    iVar2 = -0x4380;
  }
  else {
    iVar2 = FUN_ram_42070788(uVar3,param_2,param_4,param_3,param_5);
    if ((iVar2 == 0) && (uVar1 < param_6)) {
      iVar2 = -0x3900;
    }
  }
  return iVar2;
}

