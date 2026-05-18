
int FUN_ram_42024f9e(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = *(short *)(param_2 + 4);
  if ((int)*(short *)(param_3 + 4) * (int)sVar1 * param_4 < 0) {
    iVar2 = FUN_ram_42024cd8(param_2,param_3);
    if (iVar2 == -1) {
      iVar2 = FUN_ram_42024ec8(param_1,param_3,param_2);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(short *)(param_1 + 4) = -sVar1;
      return 0;
    }
    iVar3 = FUN_ram_42024ec8(param_1,param_2,param_3);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (iVar2 == 0) {
      sVar1 = 1;
    }
  }
  else {
    iVar2 = FUN_ram_42024e18();
    if (iVar2 != 0) {
      return -0x10;
    }
  }
  *(short *)(param_1 + 4) = sVar1;
  return 0;
}

