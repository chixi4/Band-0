
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204bd9a(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  
  uVar4 = _DAT_ram_6004d000;
  uVar9 = *(uint *)(param_1 + 0x28);
  uVar8 = *(undefined4 *)(param_1 + 0x38);
  if (((uVar9 == 0) || (*(uint *)(param_1 + 0x3c) < 100)) ||
     (uVar6 = (*(code *)&SUB_ram_40011cbc)(_DAT_ram_6004d000), uVar6 < 0x1e848)) {
    if (*(char *)(param_1 + 0xe) != '\x02') {
      return;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    uVar9 = (*(code *)&SUB_ram_40011cbc)(uVar4,uVar8);
    if (uVar9 < 0x1e848) {
      return;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x60) + 10);
    *(undefined4 *)(param_1 + 0x38) = uVar4;
    *(undefined4 *)(param_1 + 0x5c) = 500000;
    (*(code *)&SUB_ram_40011c80)(param_1);
    iVar5 = *(int *)(param_1 + 0x70);
    iVar7 = (**(code **)(param_1 + 0x74))(*(undefined1 *)(param_1 + 0xd));
    iVar5 = iVar5 + iVar7 * 0xc;
    *(int *)(param_1 + 0x60) = iVar5;
    bVar2 = *(byte *)(iVar5 + 10);
    if (bVar1 < bVar2) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x4c);
    }
    else if (bVar2 < bVar1) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x4c);
    }
    goto LAB_ram_4204be42;
  }
  uVar9 = (uint)(*(int *)(param_1 + 0x2c) << 7) / uVar9;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  pcVar10 = *(char **)(param_1 + 0x60);
  uVar6 = _DAT_ram_3fcb08f8 + 1;
  _DAT_ram_3fcb08f8 = uVar6;
  *(char *)(param_1 + 0x1b) = (char)uVar9;
  if (*(byte *)(param_1 + 0x1c) == 0) {
    uVar6 = (int)((uint)(byte)pcVar10[9] * 3 + 0x80) >> 2;
    if ((uVar6 & 0xff) < (uVar9 & 0xff)) {
      *(char *)(param_1 + 0x1c) = (char)((int)((uVar9 & 0xff) + uVar6) >> 1);
    }
    else {
      *(char *)(param_1 + 0x1c) = (char)uVar6;
    }
    goto LAB_ram_4204be42;
  }
  iVar5 = (int)((uVar9 & 0xff) + (uint)*(byte *)(param_1 + 0x1c)) >> 1;
  *(char *)(param_1 + 0x1c) = (char)iVar5;
  uVar9 = (*(code *)&SUB_ram_40011cbc)(uVar4,*(undefined4 *)(param_1 + 0x34));
  iVar7 = (*(code *)&SUB_ram_40011cc8)(param_1,iVar5);
  if ((iVar7 != 0) && (*(uint *)(param_1 + 0x5c) < uVar9)) {
    if ((*pcVar10 == '\0') && (*(char *)(param_1 + 0x83) == '\x01')) {
      *(undefined1 *)(param_1 + 0x83) = 0;
    }
    (*(code *)&SUB_ram_40011ca8)(param_1);
    goto LAB_ram_4204be42;
  }
  bVar1 = pcVar10[0xb];
  if (((bVar1 & 1) == 0) && ((uVar6 & 3) != 0)) goto LAB_ram_4204be42;
  cVar3 = *pcVar10;
  uVar6 = (*(code *)&SUB_ram_40011cac)(*(undefined1 *)(param_1 + 1),cVar3);
  if (iVar5 < (int)((uint)(byte)pcVar10[9] - (uVar6 >> 1 & 0xff))) {
    if (((bVar1 & 1) != 0) && (*(uint *)(param_1 + 0x5c) < 4000000)) {
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) << 1;
    }
    uVar6 = (*(code *)&SUB_ram_40011cbc)(uVar4,*(undefined4 *)(param_1 + 0x30));
    if ((0x1e848 < uVar6) && (0x1e848 < uVar9)) {
      if ((cVar3 == '\0') || ((byte)(cVar3 - 0x29U) < 2)) {
        *(undefined1 *)(param_1 + 0x83) = 1;
      }
      (*(code *)&SUB_ram_40011c8c)(param_1,1);
    }
    goto LAB_ram_4204be42;
  }
  if (cVar3 == '\0') {
    if (*(char *)(param_1 + 3) < '\v') {
LAB_ram_4204bfda:
      *(undefined1 *)(param_1 + 0x83) = 1;
    }
  }
  else if ((byte)(cVar3 - 0x29U) < 2) goto LAB_ram_4204bfda;
  if ((bVar1 & 1) != 0) {
    pcVar10[0xb] = bVar1 & 0xfe;
    *(undefined4 *)(param_1 + 0x5c) = 500000;
  }
LAB_ram_4204be42:
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

