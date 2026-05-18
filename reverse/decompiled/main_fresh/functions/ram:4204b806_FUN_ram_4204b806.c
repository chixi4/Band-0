
int FUN_ram_4204b806(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == -1) {
    return 0x106;
  }
  param_2 = param_2 * 8;
  uVar4 = *(uint *)(gp + -0x410 + param_2);
  iVar1 = gp + -0x410;
  if ((uVar4 >> 4 & 1) != 0) goto LAB_ram_4204b876;
  uVar4 = uVar4 & 0xf;
  uVar3 = uVar4 - 5;
  if (3 < uVar3) {
    return 0x10b;
  }
  if (uVar3 < 2) {
    iVar2 = FUN_ram_4204b7ce();
LAB_ram_4204b850:
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else if (uVar4 == 7) {
    iVar2 = FUN_ram_4204b764(param_2 + 2 + iVar1);
    goto LAB_ram_4204b850;
  }
  *(byte *)(iVar1 + param_2) = *(byte *)(iVar1 + param_2) & 0xf | 0x10;
LAB_ram_4204b876:
  FUN_ram_4039c11e(param_1,iVar1 + param_2 + 2,*(undefined1 *)(iVar1 + param_2 + 1));
  return 0;
}

