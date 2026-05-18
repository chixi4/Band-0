
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203f776(void)

{
  ushort uVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int unaff_s3;
  undefined1 unaff_s4;
  undefined1 unaff_s5;
  undefined1 unaff_s6;
  
  iVar2 = FUN_ram_4203f28c();
  iVar5 = *(int *)(unaff_s1 + -0x134);
  *(undefined1 *)(unaff_s0 + 0x4c) = unaff_s6;
  *(undefined1 *)(unaff_s0 + 0x4d) = unaff_s5;
  (**(code **)(unaff_s3 + iVar5 + -0x434))(unaff_s4);
  if (iVar2 == 0) {
    uVar1 = *(ushort *)(_DAT_ram_3fcdff6c + 0x26);
    uVar6 = (uint)DAT_ram_3fcdfe66;
    pcVar4 = *(code **)(*(int *)(unaff_s1 + -0x134) + 0x4d8);
    uVar3 = (*pcVar4)(*(undefined4 *)(unaff_s0 + 0x94),*(undefined4 *)(unaff_s0 + 0xa0),
                      *(undefined1 *)(unaff_s0 + 0x4c),*(undefined1 *)(unaff_s0 + 0x4d),pcVar4);
    if ((uint)*(ushort *)(unaff_s0 + 0x84) * 0x271 - 0x96 <= uVar3) {
      (**(code **)(*(int *)(unaff_s1 + -0x134) + 0xa00))(0x7007,uVar3);
    }
    iVar5 = (**(code **)(*(int *)(unaff_s1 + -0x134) + 0x114))();
    pcVar4 = *(code **)(_DAT_ram_3fcdfed0 + 0x584);
    iVar5 = *(byte *)(iVar5 + 0x26) + uVar3;
    *(int *)(unaff_s0 + 0xac) = iVar5;
    iVar5 = (*pcVar4)(iVar5 + *(int *)(unaff_s0 + 0xa4));
    *(uint *)(unaff_s0 + 0x78) =
         iVar5 + (*(int *)(unaff_s0 + 0x94) - (uint)*(byte *)(_DAT_ram_3fcdff70 + 4)) +
                 uVar1 * uVar6;
  }
  return iVar2;
}

