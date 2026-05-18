
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420418be(void)

{
  uint unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int in_a5;
  int unaff_s2;
  undefined1 unaff_s4;
  int unaff_s6;
  int iVar2;
  code *pcVar3;
  
  if (unaff_s1 == 0) {
    (**(code **)(in_a5 + 0x3bc))();
    (**(code **)(*(int *)(unaff_s2 + -0x134) + 0x114))();
    do {
      iVar2 = *(int *)(unaff_s0 * 4 + *(int *)(_DAT_ram_3fcdff68 + 8));
      if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x108) & 3) == 3)) {
        *(ushort *)(iVar2 + 10) = *(ushort *)(iVar2 + 10) | 0x8000;
        *(undefined1 *)(iVar2 + 0x10f) = unaff_s4;
        FUN_ram_4039c11e(iVar2 + 0x110);
        *(undefined1 *)(iVar2 + 0x104) = 0;
      }
      unaff_s0 = unaff_s0 + 1 & 0xff;
      iVar2 = (**(code **)(*(int *)(unaff_s2 + -0x134) + 0x114))();
    } while (unaff_s0 <= *(ushort *)(iVar2 + 0x42));
    in_a5 = 0x3fce0000;
  }
  if (0xb < *(ushort *)(in_a5 + -0x1a0)) {
    for (iVar2 = *(int *)(*(int *)(unaff_s6 + -0x9c) + 0x20); iVar2 != 0;
        iVar2 = *(int *)(iVar2 + 0xec)) {
      if (*(char *)(iVar2 + 0xb) == '\x02') {
        (**(code **)(*(int *)(unaff_s2 + -0x134) + 0xaac))(iVar2);
        *(undefined1 *)(iVar2 + 0x1ef) = 1;
        if (*(char *)(iVar2 + 0x1ec) != '\0') {
          pcVar3 = *(code **)(_DAT_ram_3fcdfec4 + 100);
          uVar1 = (**(code **)(_DAT_ram_3fcdfec4 + 0x90))((uint)*(byte *)(iVar2 + 0x1ed) * 200);
          (*pcVar3)(iVar2 + 0x1fc,uVar1);
        }
      }
    }
  }
  return 0;
}

