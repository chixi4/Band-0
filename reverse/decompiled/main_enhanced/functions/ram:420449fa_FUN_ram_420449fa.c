
bool FUN_ram_420449fa(uint param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint in_a5;
  uint uVar7;
  byte bVar8;
  
  iVar2 = (*(code *)&SUB_ram_400109cc)((int)in_a5 >> 1 ^ in_a5);
  if (iVar2 < 2) {
    return false;
  }
  iVar2 = 0x20;
  bVar1 = false;
  uVar4 = 1;
  do {
    iVar2 = iVar2 + -1;
    if (((param_1 ^ 0x8e89bed6) & uVar4) != 0) {
      if (bVar1) {
        iVar2 = 0x1f;
        bVar8 = 0;
        bVar3 = 0;
        uVar7 = 1;
        uVar4 = param_1 & 1;
        bVar5 = 1;
        break;
      }
      bVar1 = true;
    }
    uVar4 = uVar4 << 1;
    if (iVar2 == 0) {
      return false;
    }
  } while( true );
LAB_ram_42044a66:
  uVar7 = uVar7 << 1;
  bVar6 = 1;
  if ((param_1 & uVar7) == 0) {
    if (uVar4 != 0) {
      bVar3 = bVar3 + 1;
      goto LAB_ram_42044abe;
    }
    bVar6 = bVar5 + 1;
    if (uVar7 == 0x100) goto LAB_ram_42044ab0;
LAB_ram_42044a7e:
    if ((uVar7 == 0x10000) && (0xb < bVar3)) {
      return false;
    }
  }
  else {
    if (uVar4 == 0) {
      bVar3 = bVar3 + 1;
    }
    else {
      bVar6 = bVar5 + 1;
LAB_ram_42044abe:
      bVar8 = bVar8 + 1;
    }
    if (uVar7 != 0x100) goto LAB_ram_42044a7e;
LAB_ram_42044ab0:
    if (bVar8 < 3) {
      return false;
    }
  }
  if (6 < bVar6) {
    return false;
  }
  iVar2 = iVar2 + -1;
  uVar4 = param_1 & uVar7;
  bVar5 = bVar6;
  if (iVar2 == 0) {
    if (uVar7 != 0x80000000) {
      return false;
    }
    return bVar3 < 0x19;
  }
  goto LAB_ram_42044a66;
}

