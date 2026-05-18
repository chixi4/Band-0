
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203930a(byte *param_1)

{
  ushort uVar1;
  ushort uVar2;
  char *pcVar3;
  int iVar4;
  uint extraout_a1;
  code *pcVar5;
  int in_a5;
  byte bVar6;
  int unaff_s4;
  
  pcVar3 = (char *)(**(code **)(in_a5 + 0x5cc))(param_1[1]);
  if (pcVar3 == (char *)0x0) {
    return 0x42;
  }
  bVar6 = *param_1;
  if (0xb < _DAT_ram_3fcdfe60) {
    bVar6 = bVar6 & 1;
  }
  if (bVar6 == 0) {
    (**(code **)(*(int *)(unaff_s4 + -0x134) + 0x5ec))(pcVar3);
  }
  else {
    if ((*(ushort *)(pcVar3 + 10) & 0x1800) != 0x800) {
      return 0xc;
    }
    uVar1 = *(ushort *)(pcVar3 + 0xc) & 0x33;
    if ((*(ushort *)(pcVar3 + 0xc) & 0x33) != 0) {
      return 0xc;
    }
    pcVar5 = *(code **)(*(int *)(unaff_s4 + -0x134) + 0x564);
    if (*(int *)(pcVar3 + 0xe8) != 0) {
      uVar1 = *(ushort *)(*(int *)(pcVar3 + 0xe8) + 0x10);
    }
    iVar4 = (*pcVar5)(uVar1,*(undefined2 *)(pcVar3 + 0xfc),*(undefined2 *)(pcVar3 + 0xfa),
                      pcVar3[0xe5],pcVar5);
    if (iVar4 == 0) {
      return 0x45;
    }
    if (((*pcVar3 != '\0') && ((pcVar3[0x108] & 2U) == 0)) &&
       (iVar4 = (**(code **)(*(int *)(unaff_s4 + -0x134) + 0x5e0))(pcVar3), iVar4 != 0)) {
      return iVar4;
    }
    if (0xb < _DAT_ram_3fcdfe60) {
      if ((*param_1 & 2) == 0) {
        pcVar3[0x108] = pcVar3[0x108] & 0xcf;
      }
      else {
        (**(code **)(*(int *)(unaff_s4 + -0x134) + 0xd8))();
        if ((extraout_a1 & 0x10) == 0) {
          return 0x11;
        }
        uVar1 = *(ushort *)(pcVar3 + 0xda);
        pcVar3[0x108] = pcVar3[0x108] | 0x10;
        do {
          uVar2 = (**(code **)(*(int *)(unaff_s4 + -0x134) + 0x7dc))();
        } while ((uVar1 & 0xfff) == (uVar2 & 0xfff));
        *(ushort *)(pcVar3 + 0x196) = uVar2 & 0xfff | *(ushort *)(pcVar3 + 0xda) & 0xf000;
        pcVar3[0x108] = pcVar3[0x108] | 0x20;
      }
    }
  }
  pcVar3[0x108] = bVar6 != 0 | pcVar3[0x108] & 0xfeU;
  return 0;
}

