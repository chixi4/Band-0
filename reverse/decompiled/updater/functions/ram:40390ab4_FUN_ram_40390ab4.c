
undefined4 FUN_ram_40390ab4(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  puVar1 = (uint *)param_1[1];
  puVar2 = (uint *)*param_1;
  if (puVar1 == (uint *)0x0) {
    iVar4 = (int)(short)puVar2[1];
  }
  else {
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 1;
    iVar4 = (int)((uVar3 | 1) << 0xf) >> 0x10;
    for (puVar1 = (uint *)puVar2[2]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[5]) {
      if ((iVar4 == (int)(*puVar1 << 0xf) >> 0x10) && ((*puVar1 & 1) == 0)) {
        if (iVar4 < 0) goto LAB_ram_40390b28;
        goto LAB_ram_40390b10;
      }
    }
  }
  if (iVar4 < 0) {
LAB_ram_40390b28:
    if ((int)(*puVar2 << 0xf) < 0) {
      FUN_ram_40394d2c();
      FUN_ram_40394d8e();
      return 0x102;
    }
    FUN_ram_40390a8e(*puVar2 >> 0x11 & 0x1f,iVar4);
  }
  else {
    (*(code *)&SUB_ram_400107e4)(*(ushort *)((int)puVar2 + 2) & 1,iVar4,6);
  }
LAB_ram_40390b10:
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  return 0;
}

