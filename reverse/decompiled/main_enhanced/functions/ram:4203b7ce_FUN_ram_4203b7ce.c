
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203b7ce(void)

{
  int unaff_s0;
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  code *in_a5;
  int unaff_s2;
  int unaff_s4;
  int in_stack_0000000c;
  
  (*in_a5)(0x3d8);
  iVar4 = *(int *)(unaff_s2 + -0x134);
  if (*(char *)(unaff_s0 + 0x14d) != '\0') {
    (**(code **)(iVar4 + 0x110))
              (0x3d9,&DAT_ram_3c0f6be0,*(char *)(unaff_s0 + 0x14d),0,iVar4,*(code **)(iVar4 + 0x110)
              );
    iVar4 = *(int *)(unaff_s2 + -0x134);
  }
  pcVar5 = *(code **)(iVar4 + 0x4d0);
  sVar2 = *(short *)(unaff_s0 + 0x100) + 1;
  *(byte *)(unaff_s0 + 0x108) = *(byte *)(unaff_s0 + 0x108) & 0xf3 | 4;
  *(short *)(unaff_s0 + 0x100) = sVar2;
  (*pcVar5)(sVar2,*(undefined2 *)(unaff_s0 + 0xfe),*(undefined1 *)(unaff_s0 + 0x109),
            unaff_s0 + 0x10a,pcVar5);
  (**(code **)(*(int *)(unaff_s2 + -0x134) + 0x5f4))();
  (**(code **)(*(int *)(unaff_s2 + -0x134) + 0xd0))
            (*(undefined1 *)(unaff_s0 + 0x149),*(undefined1 *)(unaff_s0 + 0xe5));
  iVar4 = _DAT_ram_3fcdff6c;
  iVar1 = *(int *)(unaff_s0 + 0x120);
  bVar6 = *(char *)(unaff_s0 + 0x11d) + *(char *)(unaff_s0 + 0x11c);
  *(byte *)(unaff_s0 + 0x11d) = bVar6;
  if (*(ushort *)(iVar4 + 0x24) <= (ushort)bVar6) {
    bVar6 = bVar6 - (char)*(ushort *)(iVar4 + 0x24);
    iVar1 = iVar1 + 1;
    *(int *)(unaff_s0 + 0x120) = iVar1;
    *(byte *)(unaff_s0 + 0x11d) = bVar6;
  }
  iVar4 = *(int *)(unaff_s2 + -0x134);
  *(byte *)(unaff_s0 + 0x126) = bVar6;
  *(int *)(unaff_s0 + 0x128) = iVar1;
  iVar3 = (**(code **)(iVar4 + 0x10c))();
  iVar4 = _DAT_ram_3fcdff70;
  *(int *)(unaff_s0 + 300) = iVar3 + iVar1 + 0x32;
  pcVar5 = *(code **)(_DAT_ram_3fcdfed0 + 0x39c);
  *(uint *)(unaff_s0 + 0x128) = *(int *)(unaff_s0 + 0x128) - (uint)*(byte *)(iVar4 + 4);
  iVar4 = (*pcVar5)(unaff_s0 + 0x124,&stack0x0000000c);
  if (iVar4 == 0) {
    iVar4 = (uint)*(byte *)(_DAT_ram_3fcdff70 + 4) + in_stack_0000000c;
    *(int *)(unaff_s0 + 0x140) = iVar4;
    if ((unaff_s4 == 0) && (iVar4 != *(int *)(unaff_s0 + 0x120))) {
      (**(code **)(*(int *)(unaff_s2 + -0x134) + 0x110))(0x40b,&DAT_ram_3c0f6be0,0);
      iVar4 = *(int *)(unaff_s0 + 0x140);
    }
    *(int *)(unaff_s0 + 0x120) = iVar4;
  }
  else {
    (**(code **)(_DAT_ram_3fcdfec4 + 0x14))
              (*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,unaff_s0 + 0x174);
  }
  return;
}

