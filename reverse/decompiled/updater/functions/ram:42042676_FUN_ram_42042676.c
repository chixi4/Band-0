
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42042676(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(_DAT_ram_3fcb4f84 + 0xe4);
  if (iVar1 == 0) {
    FUN_ram_42033fd8(1,0x10004,2,0x3c07ff60);
    return;
  }
  if (*(int *)(iVar1 + 0x300) == 0) {
    FUN_ram_42033fd8(1,0x40,3,0x3c07e5f8,*(undefined1 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 5),
                     *(undefined1 *)(iVar1 + 6),*(undefined1 *)(iVar1 + 7),
                     *(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9));
    *(undefined1 *)(iVar1 + 0x2fa) = 1;
    iVar3 = iVar1 + 0x318;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar3);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar3);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar3,0x42030872,0);
    iVar4 = iVar1 + 0x304;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar3,0x400,0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar4);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar4);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar4,0x42030868,0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar4,200,1);
  }
  if (*(int *)(iVar1 + 0x300) == 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x13c))(iVar1 + 0x2fc,2);
    uVar2 = *(ushort *)(iVar1 + 0x2fc) % 0xfff5;
  }
  else {
    if (*(int *)(iVar1 + 0x300) == 10) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar1 + 0x318);
      FUN_ram_420425e4();
      return;
    }
    uVar2 = *(short *)(iVar1 + 0x2fc) + 1;
  }
  *(ushort *)(iVar1 + 0x2fc) = uVar2;
  FUN_ram_420445a0(iVar1,8,0,iVar1 + 0x2fc);
  *(int *)(iVar1 + 0x300) = *(int *)(iVar1 + 0x300) + 1;
  return;
}

