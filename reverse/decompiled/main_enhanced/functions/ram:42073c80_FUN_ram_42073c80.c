
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42073c80(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int in_a5;
  int unaff_s2;
  
  if ((in_a5 != 0) &&
     (((iVar1 = *(int *)(unaff_s0 + 0x14), iVar1 == 0 || (*(char *)(iVar1 + 0x128) == '\x06')) &&
      ((unaff_s1 + 0x60U & 0xd0) == 0)))) {
    *(undefined2 *)(unaff_s0 + 0x1c4) = 0;
    *(undefined1 *)(unaff_s0 + 0x1c6) = 0;
    if (iVar1 != 0) {
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fbb00,*(undefined1 *)(iVar1 + 0x128));
      *(undefined1 *)(*(int *)(unaff_s0 + 0x14) + 0x128) = 0;
    }
    thunk_FUN_ram_42094f92(0,*(undefined4 *)(unaff_s0 + 0x18c));
    if (*(int *)(unaff_s0 + 0x148) != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      *(undefined4 *)(unaff_s0 + 0x148) = 0;
    }
    if (*(int *)(unaff_s0 + 0x138) != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      *(undefined4 *)(unaff_s0 + 0x138) = 0;
    }
    if (*(int *)(unaff_s0 + 0x13c) != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      *(undefined4 *)(unaff_s0 + 0x13c) = 0;
    }
  }
  iVar1 = FUN_ram_42079fd8();
  if ((iVar1 != 0) && (unaff_s1 == 0xd0)) {
    FUN_ram_42079ff8(*(uint *)(*(int *)(unaff_s2 + 0x24) + 0x10) >> 0x13 & 1,
                     *(char *)(*(int *)(unaff_s2 + 0x24) + 0x13) != '\x01');
    return;
  }
  return;
}

