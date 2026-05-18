
int FUN_ram_4209852a(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4207f4da();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x60);
    iVar2 = 0;
    if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x6c), iVar2 != 0)) {
      *param_1 = *(undefined4 *)(iVar1 + 0x70);
    }
  }
  return iVar2;
}

