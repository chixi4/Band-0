
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42023b5a(uint param_1,uint param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    if ((uint)*(byte *)(_DAT_ram_3fcc518c + 0x58) <= (uVar4 & 0xff)) {
      return 0;
    }
    iVar2 = *(int *)(_DAT_ram_3fcc518c + 0x54) + uVar4 * 0x18;
    for (uVar3 = 0; (uVar3 & 0xff) < (uint)*(byte *)(iVar2 + 8); uVar3 = uVar3 + 1) {
      iVar1 = uVar3 * 0x14 + *(int *)(iVar2 + 0xc);
      if (((*(byte *)(iVar1 + 1) == param_1) && (*(byte *)(iVar1 + 2) == param_2)) &&
         (*param_3 == *(char *)(iVar1 + 3))) {
        return iVar1;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

