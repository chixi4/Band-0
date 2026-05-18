
undefined4 FUN_ram_42012a82(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return 0x16;
  }
  if (param_2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    if (*param_2 == 0) {
      return 0x16;
    }
    uVar4 = param_2[1];
    if (2 < uVar4) {
      return 0x16;
    }
  }
  piVar1 = (int *)thunk_FUN_ram_403904a6(8);
  uVar2 = 0xc;
  if (piVar1 != (int *)0x0) {
    piVar1[1] = uVar4;
    uVar2 = 1;
    if (uVar4 == 1) {
      uVar2 = 4;
    }
    iVar3 = FUN_ram_4039731c(uVar2);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      thunk_FUN_ram_40390634(piVar1);
      uVar2 = 0xb;
    }
    else {
      *param_1 = (int)piVar1;
      uVar2 = 0;
    }
  }
  return uVar2;
}

