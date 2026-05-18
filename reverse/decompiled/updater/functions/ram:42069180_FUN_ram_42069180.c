
undefined4
FUN_ram_42069180(undefined1 *param_1,uint param_2,uint *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  
  uVar9 = 0;
  uVar4 = 0;
  for (uVar5 = 0; uVar5 < param_5; uVar5 = uVar5 + 1) {
    bVar3 = false;
    while( true ) {
      bVar1 = param_4[uVar5];
      if (bVar1 != 0x20) break;
      uVar5 = uVar5 + 1;
      bVar3 = true;
      if (param_5 == uVar5) goto LAB_ram_420691ee;
    }
    bVar2 = bVar1;
    if ((param_5 - uVar5 != 1) && (bVar1 == 0xd)) {
      bVar2 = (param_4 + uVar5)[1];
    }
    if (bVar2 != 10) {
      if ((bVar3) || ((char)bVar1 < '\0')) goto LAB_ram_42069274;
      if (bVar1 == 0x3d) {
        uVar9 = uVar9 + 1;
        if (2 < uVar9) goto LAB_ram_42069274;
      }
      else if ((uVar9 != 0) || (iVar8 = FUN_ram_42068fb0(), iVar8 < 0)) goto LAB_ram_42069274;
      uVar4 = uVar4 + 1;
    }
  }
LAB_ram_420691ee:
  if (((uVar4 - uVar9 & 3) == 1) || ((uVar4 & 3) != 0)) {
LAB_ram_42069274:
    uVar7 = 0xffffffd4;
  }
  else {
    uVar9 = (uVar4 >> 2) * 3 - uVar9;
    *param_3 = uVar9;
    if (uVar9 != 0) {
      if (param_1 == (undefined1 *)0x0) {
        return 0xffffffd6;
      }
      if (param_2 < uVar9) {
        return 0xffffffd6;
      }
    }
    pbVar10 = param_4 + uVar5;
    iVar8 = 0;
    uVar4 = 0;
    puVar6 = param_1;
    for (; param_4 != pbVar10; param_4 = param_4 + 1) {
      uVar9 = *param_4 - 10;
      if ((uVar9 & 0xff) < 0x17) {
        if ((-0x40000a >> (uVar9 & 0x1f) & 1U) != 0) goto LAB_ram_420692d6;
      }
      else {
        if (*param_4 == 0x3d) break;
LAB_ram_420692d6:
        iVar8 = iVar8 + 1;
        uVar9 = FUN_ram_42068fb0();
        uVar4 = uVar9 | uVar4 << 6;
        if (iVar8 == 4) {
          *puVar6 = (char)(uVar4 >> 0x10);
          puVar6[1] = (char)(uVar4 >> 8);
          puVar6[2] = (char)uVar4;
          iVar8 = 0;
          puVar6 = puVar6 + 3;
        }
      }
    }
    if (iVar8 == 3) {
      *puVar6 = (char)((uVar4 << 6) >> 0x10);
      puVar6[1] = (char)((uVar4 << 6) >> 8);
      puVar6 = puVar6 + 2;
    }
    else if (iVar8 == 2) {
      *puVar6 = (char)((uVar4 << 0xc) >> 0x10);
      puVar6 = puVar6 + 1;
    }
    uVar7 = 0xffffff92;
    if (*param_3 == (int)puVar6 - (int)param_1) {
      uVar7 = 0;
    }
  }
  return uVar7;
}

