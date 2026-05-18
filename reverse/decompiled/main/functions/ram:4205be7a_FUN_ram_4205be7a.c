
undefined4 FUN_ram_4205be7a(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int extraout_a5;
  undefined4 uVar7;
  int iVar8;
  uint local_30 [3];
  uint auStack_24 [4];
  
  puVar6 = local_30;
  bVar1 = *param_1;
LAB_ram_4205beac:
  uVar5 = (uint)bVar1;
  if (((&DAT_ram_3c0fb899)[uVar5] & 4) == 0) {
    return 0;
  }
  iVar3 = 10;
  if (uVar5 == 0x30) {
    uVar5 = (uint)param_1[1];
    if ((uVar5 & 0xdf) == 0x58) {
      uVar5 = (uint)param_1[2];
      iVar3 = 0x10;
      param_1 = param_1 + 2;
    }
    else {
      param_1 = param_1 + 1;
      iVar3 = 8;
    }
  }
  uVar2 = 0;
  do {
    param_1 = param_1 + 1;
    bVar1 = (&DAT_ram_3c0fb899)[uVar5];
    if ((bVar1 & 4) == 0) {
      if ((iVar3 != 0x10) || ((bVar1 & 0x44) == 0)) break;
      iVar8 = 0x41;
      if ((bVar1 & 3) == 2) {
        iVar8 = 0x61;
      }
      uVar2 = uVar2 << 4 | (uVar5 + 10) - iVar8;
    }
    else {
      if ((iVar3 == 8) && (7 < uVar5 - 0x30)) break;
      uVar2 = (iVar3 * uVar2 + uVar5) - 0x30;
    }
    uVar5 = (uint)*param_1;
  } while( true );
  if (uVar5 != 0x2e) {
    if ((uVar5 != 0) && ((bVar1 & 8) == 0)) {
      return 0;
    }
    iVar3 = ((int)puVar6 - (int)local_30 >> 2) + 1;
    if (iVar3 != 2) {
      if (2 < iVar3) goto LAB_ram_4205bf76;
      if (iVar3 == 0) {
        return 0;
      }
      if (iVar3 != 1) goto LAB_ram_4205bf6e;
      goto LAB_ram_4205bfc0;
    }
    if (0xffffff < uVar2) {
      return 0;
    }
    if (0xff < local_30[0]) {
      return 0;
    }
    uVar5 = local_30[0] << 0x18;
    goto LAB_ram_4205bfbe;
  }
  if (auStack_24 == puVar6) {
    return 0;
  }
  *puVar6 = uVar2;
  bVar1 = *param_1;
  puVar6 = puVar6 + 1;
  goto LAB_ram_4205beac;
LAB_ram_4205bf6e:
  uVar2 = FUN_ram_4039bf1e();
  iVar3 = extraout_a5;
LAB_ram_4205bf76:
  if (iVar3 == 3) {
    if (0xffff < uVar2) {
      return 0;
    }
    if (0xff < local_30[0]) {
      return 0;
    }
    if (0xff < local_30[1]) {
      return 0;
    }
    uVar5 = local_30[0] << 0x18;
    uVar4 = local_30[1] << 0x10;
    goto LAB_ram_4205bff6;
  }
  if (iVar3 == 4) {
    uVar7 = 0;
    if ((((uVar2 < 0x100) && (local_30[0] < 0x100)) && (local_30[1] < 0x100)) &&
       (local_30[2] < 0x100)) {
      uVar5 = local_30[0] << 0x18 | local_30[1] << 0x10;
      uVar4 = local_30[2] << 8;
LAB_ram_4205bff6:
      uVar5 = uVar5 | uVar4;
LAB_ram_4205bfbe:
      uVar2 = uVar2 | uVar5;
LAB_ram_4205bfc0:
      if (param_2 != (undefined4 *)0x0) {
        uVar7 = FUN_ram_420523b8(uVar2);
        *param_2 = uVar7;
      }
      uVar7 = 1;
    }
    return uVar7;
  }
  goto LAB_ram_4205bf6e;
}

