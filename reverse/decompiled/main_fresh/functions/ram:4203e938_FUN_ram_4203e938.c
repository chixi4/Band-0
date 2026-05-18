
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203e938(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  uVar1 = *(undefined2 *)(iVar2 + 0x20);
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  if (500 < *(ushort *)(iVar2 + 0x20)) {
    iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    *(undefined2 *)(iVar2 + 0x20) = 500;
  }
  FUN_ram_4203e4ba();
  iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  iVar2 = _DAT_ram_3fcdfecc;
  *(undefined2 *)(iVar3 + 0x20) = uVar1;
  iVar2 = (**(code **)(iVar2 + 0x114))();
  *_DAT_ram_3fcb6a20 = *(undefined1 *)(iVar2 + 99);
  return;
}

