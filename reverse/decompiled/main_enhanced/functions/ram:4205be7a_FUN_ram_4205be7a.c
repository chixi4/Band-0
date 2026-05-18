
undefined4 FUN_ram_4205be7a(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint local_30 [3];
  uint auStack_24 [4];
  
  puVar7 = local_30;
  bVar1 = *param_1;
LAB_ram_4205beac:
  uVar6 = (uint)bVar1;
  if (((&DAT_ram_3c0fb899)[uVar6] & 4) == 0) {
    return 0;
  }
  iVar4 = 10;
  if (uVar6 == 0x30) {
    uVar6 = (uint)param_1[1];
    if ((uVar6 & 0xdf) == 0x58) {
      uVar6 = (uint)param_1[2];
      iVar4 = 0x10;
      param_1 = param_1 + 2;
    }
    else {
      param_1 = param_1 + 1;
      iVar4 = 8;
    }
  }
  uVar2 = 0;
  do {
    param_1 = param_1 + 1;
    bVar1 = (&DAT_ram_3c0fb899)[uVar6];
    if ((bVar1 & 4) == 0) {
      if ((iVar4 != 0x10) || ((bVar1 & 0x44) == 0)) break;
      iVar8 = 0x41;
      if ((bVar1 & 3) == 2) {
        iVar8 = 0x61;
      }
      uVar2 = uVar2 << 4 | (uVar6 + 10) - iVar8;
    }
    else {
      if ((iVar4 == 8) && (7 < uVar6 - 0x30)) break;
      uVar2 = (iVar4 * uVar2 + uVar6) - 0x30;
    }
    uVar6 = (uint)*param_1;
  } while( true );
  if (uVar6 == 0x2e) {
    if (auStack_24 == puVar7) {
      return 0;
    }
    *puVar7 = uVar2;
    bVar1 = *param_1;
    puVar7 = puVar7 + 1;
    goto LAB_ram_4205beac;
  }
  if ((uVar6 != 0) && ((bVar1 & 8) == 0)) {
    return 0;
  }
  iVar4 = (int)puVar7 - (int)local_30 >> 2;
  iVar8 = iVar4 + 1;
  if (iVar8 == 2) {
    if (0xffffff < uVar2) {
      return 0;
    }
    if (0xff < local_30[0]) {
      return 0;
    }
    uVar6 = local_30[0] << 0x18;
  }
  else {
    if (iVar8 < 3) {
      if (iVar4 == -1) {
        return 0;
      }
      if (iVar8 != 1) {
LAB_ram_4205bf6e:
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      goto LAB_ram_4205bfc0;
    }
    if (iVar8 == 3) {
      if (0xffff < uVar2) {
        return 0;
      }
      if (0xff < local_30[0]) {
        return 0;
      }
      if (0xff < local_30[1]) {
        return 0;
      }
      uVar6 = local_30[0] << 0x18;
      uVar5 = local_30[1] << 0x10;
    }
    else {
      if (iVar8 != 4) goto LAB_ram_4205bf6e;
      if (0xff < uVar2) {
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
      uVar5 = local_30[2] << 8;
    }
    uVar6 = uVar6 | uVar5;
  }
  uVar2 = uVar2 | uVar6;
LAB_ram_4205bfc0:
  if (param_2 != (undefined4 *)0x0) {
    uVar3 = FUN_ram_420523b8(uVar2);
    *param_2 = uVar3;
  }
  return 1;
}

