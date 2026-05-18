
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202fd9e(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(_DAT_ram_3fcb6ba0 + 0x130);
  iVar3 = iVar1;
  while( true ) {
    if (iVar3 == 0) {
      return 5;
    }
    if (iVar3 == param_1) break;
    iVar3 = *(int *)(iVar3 + 8);
  }
  if (iVar1 == iVar3) {
    *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0x130) = *(undefined4 *)(iVar3 + 8);
  }
  else {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 8);
    } while (iVar1 != param_1);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 8);
  }
  return 0;
}

