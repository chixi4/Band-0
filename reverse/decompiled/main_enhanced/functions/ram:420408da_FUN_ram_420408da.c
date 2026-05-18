
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420408da(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  while( true ) {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    if (*(ushort *)(iVar2 + 0x38) <= uVar1) break;
    iVar2 = *(int *)(*(int *)(_DAT_ram_3fcdff64 + 0x1c) + uVar1 * 4);
    uVar1 = uVar1 + 1 & 0xffff;
    (**(code **)(_DAT_ram_3fcdfec4 + 0x6c))(iVar2 + 0xf0);
    (**(code **)(_DAT_ram_3fcdfec4 + 0x6c))(iVar2 + 0xf4);
    (**(code **)(_DAT_ram_3fcdfec4 + 0x6c))(iVar2 + 0x114);
    (**(code **)(_DAT_ram_3fcdfec4 + 0x6c))(iVar2 + 0x1fc);
  }
  return;
}

