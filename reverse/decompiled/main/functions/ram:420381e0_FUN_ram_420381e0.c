
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420381e0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x72c))();
  if (iVar1 == 0) {
    if (param_1 != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0x67,&DAT_ram_3c0f5800,param_1,0);
    }
    return **(int **)(_DAT_ram_3fcdff68 + 8);
  }
  iVar1 = 0;
  (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  while( true ) {
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    iVar2 = *(int *)(iVar2 + *(int *)(_DAT_ram_3fcdff68 + 8));
    if (((*(ushort *)(iVar2 + 10) & 0x80) != 0) && (*(byte *)(iVar2 + 1) == param_1)) break;
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    if ((int)(uint)*(ushort *)(iVar2 + 0x42) < iVar1) {
      return 0;
    }
  }
  return iVar2;
}

