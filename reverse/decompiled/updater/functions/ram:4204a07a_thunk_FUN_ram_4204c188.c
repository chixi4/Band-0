
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_4204c188(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar2 = (int)(uint)DAT_ram_3fcb5108 >> 4;
    iVar1 = _DAT_ram_3fcdfd3c;
  }
  else {
    if (param_1 != 1) {
      FUN_ram_42033fd8(6,0x200,1,0x3c07df68);
      return 0x102;
    }
    uVar2 = (int)(uint)DAT_ram_3fcb5108 >> 5;
    iVar1 = _DAT_ram_3fcdfd40;
  }
  if (param_2 == 6) {
    *(int *)(iVar1 + 0x60) = gp + 0x784;
    *(int *)(iVar1 + 0x70) = gp + 0x778;
    *(int *)(iVar1 + 100) = gp + 0x778;
    *(int *)(iVar1 + 0x68) = gp + 0x784;
  }
  else {
    if ((uVar2 & 1) == 0) {
      iVar3 = gp + 0x610;
    }
    else {
      iVar3 = gp + 0x7e4;
    }
    *(int *)(iVar1 + 0x60) = iVar3;
    *(int *)(iVar1 + 0x70) = iVar3;
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x68) = iVar3;
  }
  return 0;
}

