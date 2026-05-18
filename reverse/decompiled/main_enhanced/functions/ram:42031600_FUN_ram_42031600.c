
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42031600(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(_DAT_ram_3fcb6bb8 + 0x30) <= iVar1) {
      return -1;
    }
    if (*(ushort *)(iVar1 * 4 + param_1) == param_2) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

