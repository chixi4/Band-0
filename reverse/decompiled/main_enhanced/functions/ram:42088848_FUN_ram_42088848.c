
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_ram_42088848(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 in_a3;
  char *pcVar3;
  int unaff_s2;
  undefined4 *unaff_s3;
  undefined4 uStack00000000;
  uint uStack00000004;
  uint uStack00000008;
  undefined1 in_stack_00000080;
  undefined1 uStack00000087;
  undefined4 in_stack_00000088;
  
  if (*(char *)(unaff_s0 + 0x1b8) == '\x06') {
    if (*(char *)(unaff_s0 + 0x24c) == '\0') {
      pcVar3 = "est.";
    }
    else {
      pcVar3 = &DAT_ram_3c0c497c;
    }
  }
  else {
    pcVar3 = &DAT_ram_3c0c39bc;
  }
  uStack00000008 = (uint)*(ushort *)(unaff_s0 + 0x1c0);
  uStack00000004 = (uint)*(byte *)(unaff_s0 + 0x1bc);
  uStack00000000 = in_a3;
  FUN_ram_4207a038(1,4,3,&DAT_ram_3c0ffecc,&DAT_ram_3c0c48cc,pcVar3,&stack0x00000034,
                   (int)*(char *)(unaff_s1 + 0xa4));
  FUN_ram_42086fc2();
  FUN_ram_420864f8();
  if ((*(int *)(_DAT_ram_3fcdfaf0 + 4) == 0) || (*(int *)(_DAT_ram_3fcdfaf0 + 8) != 2)) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(unaff_s2 + 4);
    FUN_ram_420919c6(0);
    iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar1 != 0) {
      (*(code *)&SUB_ram_40011ee4)();
    }
  }
  if (*(char *)(*(int *)(gp + -0xb4) + 0x92) == '\0') {
    FUN_ram_4039c11e(*(int *)(gp + -0xb4) + 0x93,*(int *)(unaff_s2 + 0xe4) + 4,6);
  }
  FUN_ram_420801be(*(undefined1 *)(*(int *)(unaff_s2 + 0xe4) + 0xab));
  *(uint *)(*(int *)(unaff_s2 + 0xe4) + 0xc) = *(uint *)(*(int *)(unaff_s2 + 0xe4) + 0xc) | 1;
  DAT_ram_3fcdfad4 = 1;
  FUN_ram_4207a038(1,0xc,4,&DAT_ram_3c0fc870,7);
  FUN_ram_4207f554(7);
  *(undefined1 *)(*(int *)(unaff_s2 + 0xe4) + 0x24) = 0;
  FUN_ram_4208581a();
  (*(code *)&SUB_ram_40011d48)();
  FUN_ram_4039c11e(&stack0x00000060);
  in_stack_00000080 = (undefined1)*unaff_s3;
  FUN_ram_4039c11e(&stack0x00000081,unaff_s2 + 0x9c,6);
  uStack00000087 = *(undefined1 *)(*(int *)(unaff_s2 + 0xe4) + 0xab);
  if (*(byte *)(unaff_s0 + 0x1ba) - 6 < 3) {
    in_stack_00000088 = 1;
    FUN_ram_4039c11e(*(int *)(unaff_s2 + 0xe4) + 0x380);
    (**(code **)(*(int *)(unaff_s0 + 0x174) + 0xc))(unaff_s1 + 4);
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc88c);
    FUN_ram_4208344a(4,&stack0x00000060,0x30);
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc8a8,*(undefined1 *)(*(int *)(unaff_s0 + 0x10) + 0x128),5);
    *(undefined1 *)(*(int *)(unaff_s0 + 0x10) + 0x128) = 5;
    *(undefined1 *)(unaff_s0 + 0x1d7) = 0;
    *(undefined1 *)(unaff_s1 + 0x33c) = 0;
    FUN_ram_4208830a();
    return 1;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(char *)(unaff_s0 + 0x1b9) + -1) {
  case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    uVar2 = FUN_ram_420888fe();
    return uVar2;
  }
}

