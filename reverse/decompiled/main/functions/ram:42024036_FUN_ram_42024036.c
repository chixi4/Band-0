
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42024036(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 0;
  do {
    if ((uint)*(byte *)(_DAT_ram_3fcc518c + 0x58) <= (uVar2 & 0xff)) {
      return 0;
    }
    iVar3 = *(int *)(_DAT_ram_3fcc518c + 0x54) + uVar2 * 0x18;
    for (uVar4 = 0; (uVar4 & 0xff) < (uint)*(byte *)(iVar3 + 8); uVar4 = uVar4 + 1) {
      iVar1 = uVar4 * 0x14 + *(int *)(iVar3 + 0xc);
      if (((*(int *)(iVar1 + 4) == param_1) && (*(byte *)(iVar1 + 2) == param_2)) &&
         (*(char *)(iVar1 + 3) == '\0')) {
        return iVar1;
      }
    }
    uVar2 = uVar2 + 1;
  } while( true );
}

