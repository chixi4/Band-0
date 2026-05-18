
undefined4 FUN_ram_420835f2(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined1 uVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  FUN_ram_4039c11e(unaff_s1 + 0x20,unaff_s0 + 0x392,0x40);
  iVar4 = *(int *)(unaff_s0 + 0x368);
  if (0x1f < iVar4 - 1U) {
    iVar4 = 0;
  }
  *(char *)(unaff_s1 + 0x60) = (char)iVar4;
  iVar4 = FUN_ram_4208ba3e(*(undefined1 *)(unaff_s0 + 0x3f3));
  if (iVar4 == 0) {
    uVar1 = FUN_ram_4208b990(1);
  }
  else {
    uVar1 = *(undefined1 *)(unaff_s0 + 0x3f3);
  }
  *(undefined1 *)(unaff_s1 + 0x61) = uVar1;
  bVar2 = *(byte *)(unaff_s0 + 0x3f5);
  if (1 < bVar2) {
    bVar2 = 0;
  }
  *(byte *)(unaff_s1 + 0x68) = bVar2;
  bVar2 = *(byte *)(unaff_s0 + 0x3f6);
  iVar4 = FUN_ram_42080830();
  if (iVar4 < (int)(uint)bVar2) {
    uVar1 = FUN_ram_42080830();
  }
  else {
    uVar1 = *(undefined1 *)(unaff_s0 + 0x3f6);
  }
  *(undefined1 *)(unaff_s1 + 0x69) = uVar1;
  sVar3 = *(short *)(unaff_s0 + 0x3f8);
  if (0xe9fc < (ushort)(sVar3 - 100U)) {
    sVar3 = 100;
  }
  *(short *)(unaff_s1 + 0x6a) = sVar3;
  uVar5 = 0;
  if (1 < *(byte *)(unaff_s0 + 0x3f4)) {
    uVar5 = 5;
    if ((*(byte *)(unaff_s0 + 0x3ff) - 3 & 0xff) < 3) {
      uVar5 = (uint)*(byte *)(unaff_s0 + 0x3ff);
    }
  }
  *(uint *)(unaff_s1 + 0x70) = uVar5;
  *(undefined1 *)(unaff_s1 + 0x6c) = *(undefined1 *)(unaff_s0 + 0x50a);
  *(undefined1 *)(unaff_s1 + 0x6d) = *(undefined1 *)(unaff_s0 + 0x50b);
  *(bool *)(unaff_s1 + 0x74) = *(char *)(unaff_s0 + 0x400) != '\0';
  *(bool *)(unaff_s1 + 0x75) = *(char *)(unaff_s0 + 0x3fd) != '\0';
  *(bool *)(unaff_s1 + 0x76) = *(char *)(unaff_s0 + 0x3fe) != '\0';
  uVar6 = 1;
  if (*(char *)(unaff_s0 + 0x47c) != '\0') {
    uVar6 = 3;
    if (*(char *)(unaff_s0 + 0x47c) == '\x01') {
      uVar6 = 2;
    }
  }
  *(undefined4 *)(unaff_s1 + 0x78) = uVar6;
  *(undefined2 *)(unaff_s1 + 0x7e) = *(undefined2 *)(unaff_s0 + 0x50e);
  *(bool *)(unaff_s1 + 0x80) = *(char *)(unaff_s0 + 0x510) != '\0';
  FUN_ram_42083512();
  return 0;
}

