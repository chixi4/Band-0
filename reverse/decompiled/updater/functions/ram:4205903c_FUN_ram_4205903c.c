
undefined4 FUN_ram_4205903c(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_30 [3];
  uint auStack_24 [4];
  
  puVar3 = local_30;
  bVar1 = *param_1;
LAB_ram_4205906e:
  uVar4 = (uint)bVar1;
  if ((*(byte *)(uVar4 + 0x3c07a941) & 4) == 0) {
    return 0;
  }
  iVar8 = 10;
  if (uVar4 == 0x30) {
    uVar4 = (uint)param_1[1];
    if ((uVar4 & 0xdf) == 0x58) {
      uVar4 = (uint)param_1[2];
      iVar8 = 0x10;
      param_1 = param_1 + 2;
    }
    else {
      param_1 = param_1 + 1;
      iVar8 = 8;
    }
  }
  uVar7 = 0;
  do {
    param_1 = param_1 + 1;
    bVar1 = *(byte *)(uVar4 + 0x3c07a941);
    if ((bVar1 & 4) == 0) {
      if ((iVar8 != 0x10) || ((bVar1 & 0x44) == 0)) break;
      iVar5 = 0x41;
      if ((bVar1 & 3) == 2) {
        iVar5 = 0x61;
      }
      uVar7 = uVar7 << 4 | (uVar4 + 10) - iVar5;
    }
    else {
      if ((iVar8 == 8) && (7 < uVar4 - 0x30)) break;
      uVar7 = (iVar8 * uVar7 + uVar4) - 0x30;
    }
    uVar4 = (uint)*param_1;
  } while( true );
  if (uVar4 == 0x2e) {
    if (auStack_24 == puVar3) {
      return 0;
    }
    *puVar3 = uVar7;
    bVar1 = *param_1;
    puVar3 = puVar3 + 1;
    goto LAB_ram_4205906e;
  }
  if ((uVar4 != 0) && ((bVar1 & 8) == 0)) {
    return 0;
  }
  iVar5 = (int)puVar3 - (int)local_30 >> 2;
  iVar8 = iVar5 + 1;
  if (iVar8 == 3) {
    if (0xffff < uVar7) {
      return 0;
    }
    if (0xff < local_30[0]) {
      return 0;
    }
    if (0xff < local_30[1]) {
      return 0;
    }
    uVar6 = local_30[0] << 0x18;
    uVar4 = local_30[1] << 0x10;
LAB_ram_420591aa:
    uVar6 = uVar6 | uVar4;
  }
  else {
    if (3 < iVar8) {
      if (iVar8 != 4) goto LAB_ram_4205912e;
      if (0xff < uVar7) {
        return 0;
      }
      if (0xff < local_30[0]) {
        return 0;
      }
      if (0xff < local_30[1]) {
        return 0;
      }
      if (0xff < local_30[2]) {
        return 0;
      }
      uVar6 = local_30[0] << 0x18 | local_30[1] << 0x10;
      uVar4 = local_30[2] << 8;
      goto LAB_ram_420591aa;
    }
    if (iVar5 == -1) {
      return 0;
    }
    if (iVar8 != 2) goto LAB_ram_4205912e;
    if (0xffffff < uVar7) {
      return 0;
    }
    if (0xff < local_30[0]) {
      return 0;
    }
    uVar6 = local_30[0] << 0x18;
  }
  uVar7 = uVar7 | uVar6;
LAB_ram_4205912e:
  if (param_2 != (undefined4 *)0x0) {
    uVar2 = FUN_ram_4205074c(uVar7);
    *param_2 = uVar2;
  }
  return 1;
}

