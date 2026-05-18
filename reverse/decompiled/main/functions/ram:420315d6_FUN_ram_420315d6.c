
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420315d6(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if ((int)(uint)*(ushort *)(_DAT_ram_3fcb6bb8 + 8) <= iVar1) {
      return -1;
    }
    if (*(int *)(*(int *)(_DAT_ram_3fcb6bb8 + 4) + iVar1 * 8) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

