
undefined4 FUN_ram_420836ce(void)

{
  int unaff_s0;
  int iVar1;
  int in_a4;
  int in_a5;
  undefined4 uVar2;
  
  iVar1 = *(int *)(in_a5 + 0xc);
  uVar2 = 1;
  if (in_a4 != 0) {
    uVar2 = 3;
    if (in_a4 == 1) {
      uVar2 = 2;
    }
  }
  *(undefined4 *)(iVar1 + 0x78) = uVar2;
  *(undefined2 *)(iVar1 + 0x7e) = *(undefined2 *)(unaff_s0 + 0x50e);
  *(bool *)(iVar1 + 0x80) = *(char *)(unaff_s0 + 0x510) != '\0';
  FUN_ram_42083512();
  return 0;
}

