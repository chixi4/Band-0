
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42044966(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = _DAT_ram_3fcb4f84;
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07dc94,0x3c072f10,0xca);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar2 = FUN_ram_42044812();
  if (iVar2 != 0) {
    return iVar2;
  }
  if (param_3 == 4) {
    thunk_FUN_ram_4204c188(iVar1 != param_1,6);
LAB_ram_420449c8:
    uVar4 = *(uint *)(param_1 + 0xa4) & 0xffffdfff;
  }
  else {
    thunk_FUN_ram_4204c188(iVar1 != param_1,0);
    if (1 < param_3 - 2U) goto LAB_ram_420449c8;
    uVar4 = *(uint *)(param_1 + 0xa4) | 0x2000;
  }
  *(uint *)(param_1 + 0xa4) = uVar4;
  if (param_2 != 1) {
    return 0;
  }
  if ((*(char *)(*(int *)(gp + -0x2b8) + 0x475) == '\0') &&
     (*(char *)(*(int *)(gp + -0x2b8) + 0x50d) == '\0')) {
    thunk_FUN_ram_4204d8dc();
  }
  else {
    thunk_FUN_ram_4204d8de();
  }
  if (iVar1 == param_1) {
    uVar3 = 0;
    if (*(char *)(*(int *)(gp + -0x2b8) + 0x475) == '\0') {
LAB_ram_42044a40:
      FUN_ram_4203d2ce(uVar3);
      return 0;
    }
  }
  else {
    if (*(char *)(*(int *)(gp + -0x2b8) + 0x50d) == '\0') {
      uVar3 = 1;
      goto LAB_ram_42044a40;
    }
    uVar3 = 1;
  }
  FUN_ram_4203d1e8(uVar3);
  return 0;
}

