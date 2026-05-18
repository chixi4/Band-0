
void FUN_ram_4209837c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  if ((param_2 == 0) || ((*(byte *)(param_1 + 0x39) & 1) == 0)) {
    if (param_4 == 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_ram_42098488(uVar3);
    if (iVar1 != 0) {
      iVar2 = (**(code **)(param_1 + 0x10))(iVar1,param_1);
      if (iVar2 == 0) {
        return;
      }
      FUN_ram_42053ac4(iVar1);
      return;
    }
  }
  FUN_ram_4205f67e(uVar3,param_4);
  return;
}

