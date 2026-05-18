
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202fc4a(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_124 [4];
  undefined4 uStack_120;
  
  (**(code **)(_DAT_ram_3fcb6a44 + 0x44))(_DAT_ram_3fcb6ba0 + 0x158,0xffffffff);
  thunk_FUN_ram_4202b7dc();
  iVar2 = _DAT_ram_3fcb6ba0;
  if ((*(uint *)(_DAT_ram_3fcb6ba0 + 0x110) >> 10 & 1) != 0) {
    *(byte *)(_DAT_ram_3fcb6ba0 + 0x111) = *(byte *)(_DAT_ram_3fcb6ba0 + 0x111) & 0xfb;
    *(undefined4 *)(iVar2 + 0x15c) = *(undefined4 *)(iVar2 + 0x118);
    *(undefined4 *)(iVar2 + 0x160) = *(undefined4 *)(iVar2 + 0x11c);
  }
  if ((*(uint *)(iVar2 + 0x120) >> 10 & 1) != 0) {
    *(byte *)(iVar2 + 0x121) = *(byte *)(iVar2 + 0x121) & 0xfb;
    *(undefined4 *)(iVar2 + 0x164) = *(undefined4 *)(iVar2 + 0x128);
    *(undefined4 *)(iVar2 + 0x168) = *(undefined4 *)(iVar2 + 300);
  }
  bVar1 = *(char *)(iVar2 + 0x104) != '\x01';
  if (bVar1) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 0xfc);
    uVar4 = *(undefined4 *)(iVar2 + 0x100);
    *(undefined1 *)(iVar2 + 0x104) = 0;
  }
  thunk_FUN_ram_4202b7f6();
  auStack_124[0] = 9;
  uStack_120 = 0x1d;
  if (*(int *)(_DAT_ram_3fcb6ba0 + 0x15c) != 0) {
    FUN_ram_4202e156(auStack_124,*(int *)(_DAT_ram_3fcb6ba0 + 0x15c),
                     *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0x160));
  }
  if (*(int *)(_DAT_ram_3fcb6ba0 + 0x164) != 0) {
    FUN_ram_4202e156(auStack_124,*(int *)(_DAT_ram_3fcb6ba0 + 0x164),
                     *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0x168));
  }
  (**(code **)(_DAT_ram_3fcb6a44 + 0x48))(_DAT_ram_3fcb6ba0 + 0x158);
  if (!bVar1) {
    auStack_124[0] = 8;
    uStack_120 = 0x1d;
    FUN_ram_4202e156(auStack_124,uVar3,uVar4);
  }
  return;
}

