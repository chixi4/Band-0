
undefined4 FUN_ram_40390b3e(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  FUN_ram_4039691e();
  FUN_ram_40396966();
  puVar2 = (uint *)param_1[1];
  puVar1 = (uint *)*param_1;
  if (puVar2 == (uint *)0x0) {
    iVar4 = (int)(short)puVar1[1];
  }
  else {
    uVar3 = *puVar2;
    *puVar2 = uVar3 | 1;
    puVar2 = (uint *)puVar1[2];
    iVar4 = (int)((uVar3 | 1) << 0xf) >> 0x10;
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    do {
      if ((iVar4 == (int)(*puVar2 << 0xf) >> 0x10) && ((*puVar2 & 1) == 0)) {
        if (iVar4 < 0) goto LAB_ram_40390bbe;
        goto LAB_ram_40390ba6;
      }
      puVar2 = (uint *)puVar2[5];
    } while (puVar2 != (uint *)0x0);
  }
  if (iVar4 < 0) {
LAB_ram_40390bbe:
    if ((int)(*puVar1 << 0xf) < 0) {
      FUN_ram_4039691e();
      FUN_ram_40396994();
      return 0x102;
    }
    FUN_ram_40390b18(*puVar1 >> 0x11 & 0x1f,iVar4);
  }
  else {
    (*(code *)&SUB_ram_400107e4)(*(ushort *)((int)puVar1 + 2) & 1,iVar4,6);
  }
LAB_ram_40390ba6:
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return 0;
}

