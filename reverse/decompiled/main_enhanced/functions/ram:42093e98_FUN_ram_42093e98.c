
void FUN_ram_42093e98(void)

{
  int iVar1;
  uint uVar2;
  uint in_a3;
  uint uVar3;
  uint in_a4;
  uint uVar4;
  int in_a5;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int in_t3;
  
  if (((((in_a3 & 0xf0) == 0xd0) && (*(char *)(in_a5 + 0x18) == '\x04')) &&
      (*(char *)(in_a5 + 0x19) == '!')) && ((in_a4 & 0x20000000) != 0)) {
    if (*(char *)(in_t3 + 0x13) == '\x01') {
      iVar5 = (*(uint *)(in_t3 + 4) >> 4 & 0xf) * -0x4c;
      uVar4 = *(uint *)(iVar5 + 0x60048208) * 0x50;
      puVar6 = (uint *)(iVar5 + 0x60048210);
      uVar3 = (*(uint *)(iVar5 + 0x6004820c) & 0x7f) + uVar4;
      uVar2 = uVar3 - 0x280;
      uVar3 = ((uint)(uVar2 < uVar3) +
              (uint)(uVar3 < uVar4) + (int)((ulonglong)*(uint *)(iVar5 + 0x60048208) * 0x50 >> 0x20)
              + -1) * 8 | uVar2 >> 0x1d;
      iVar1 = uVar2 * 8;
      uVar2 = *puVar6 >> 0x12 | *(uint *)(iVar5 + 0x6004820c) & 0xffffc000;
      uVar4 = *puVar6 >> 7 & 0x7ff;
      if ((*puVar6 >> 7 & 0x400) != 0) {
        uVar4 = 0x800 - uVar4;
      }
      uVar9 = (*puVar6 & 0x7f) * 8;
      uVar10 = uVar9 - 0x3400;
      uVar7 = uVar2 * 0x280 + uVar10;
      uVar4 = uVar4 + uVar7;
      iVar5 = (uint)(uVar4 < uVar7) +
              (uint)(uVar7 < uVar10) +
              ((uVar10 < uVar9) - 1) + (int)((ulonglong)uVar2 * 0x280 >> 0x20);
      iVar8 = (int)*(char *)(in_t3 + 0xd);
    }
    else {
      iVar8 = 0;
      uVar4 = 0;
      iVar5 = 0;
      iVar1 = 0;
      uVar3 = 0;
    }
    FUN_ram_42094eb2(in_a5 + 4,*(undefined1 *)(in_a5 + 0x1a),iVar1,uVar3,uVar4,iVar5,iVar8);
    return;
  }
  return;
}

