
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40390f2e(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_24 [4];
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = FUN_ram_403968c6();
    if (iVar1 == 1) {
      return 0;
    }
    FUN_ram_40390f04(param_1,param_3);
    iVar1 = *param_1;
  }
  iVar2 = FUN_ram_403968c6();
  if (iVar2 == 1) {
    return 0;
  }
  if (_DAT_ram_600c2148 < 2) {
    if (param_3 == 4) {
      iVar2 = FUN_ram_40395a18();
    }
    else {
      iVar2 = FUN_ram_403958fa(iVar1,param_2);
    }
  }
  else {
    if (param_3 != 4) goto LAB_ram_40390f88;
    do {
      FUN_ram_40399b58();
LAB_ram_40390f88:
      aiStack_24[0] = 0;
      iVar2 = FUN_ram_40395a4c(iVar1,0,aiStack_24);
    } while ((iVar2 == 0) && (param_2 != 0));
    if (aiStack_24[0] != 0) {
      FUN_ram_40394dba();
    }
  }
  return -(uint)(iVar2 != 1);
}

