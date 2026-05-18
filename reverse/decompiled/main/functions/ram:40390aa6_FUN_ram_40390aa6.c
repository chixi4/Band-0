
undefined4 FUN_ram_40390aa6(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  FUN_ram_4039691e();
  FUN_ram_40396966();
  puVar5 = (uint *)param_1[1];
  puVar4 = (uint *)*param_1;
  if (puVar5 == (uint *)0x0) {
    iVar2 = (int)(short)puVar4[1];
  }
  else {
    uVar1 = *puVar5;
    *puVar5 = uVar1 & 0xfffffffe;
    iVar2 = (int)((uVar1 & 0xfffffffe) << 0xf) >> 0x10;
  }
  uVar3 = *puVar4;
  uVar1 = uVar3 >> 0x10 & 1;
  if (iVar2 < 0) {
    if (uVar1 != 0) {
      FUN_ram_4039691e();
      FUN_ram_40396994();
      return 0x102;
    }
    FUN_ram_40390a80(uVar3 >> 0x11 & 0x1f);
  }
  else {
    (*(code *)&SUB_ram_400107e4)(uVar1,iVar2,uVar3 >> 0x11 & 0x1f);
  }
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return 0;
}

