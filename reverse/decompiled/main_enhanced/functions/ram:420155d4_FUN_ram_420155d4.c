
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420155d4(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iStack_28;
  int iStack_24;
  
  iVar5 = 0x10;
  iVar1 = 0;
  uVar4 = 0;
  do {
    iVar2 = FUN_ram_42062fd2(_DAT_ram_3fcc4f6c,2,&iStack_28);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (_DAT_ram_3fcc4f68 == 0) {
      uVar3 = iStack_28 + uVar4;
      iVar1 = iVar1 + (iStack_28 >> 0x1f) + (uint)(uVar3 < uVar4);
    }
    else {
      FUN_ram_420631ac(_DAT_ram_3fcc4f68,iStack_28,&iStack_24);
      uVar3 = iStack_24 + uVar4;
      iVar1 = iVar1 + (iStack_24 >> 0x1f) + (uint)(uVar3 < uVar4);
    }
    iVar5 = iVar5 + -1;
    uVar4 = uVar3;
  } while (iVar5 != 0);
  uVar4 = iVar1 >> 0x1f & 0xf;
  uVar3 = uVar3 + uVar4;
  *param_1 = uVar3 >> 4 | ((uint)(uVar3 < uVar4) + iVar1) * 0x10000000;
  return 0;
}

