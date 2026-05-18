
undefined4 FUN_ram_4207aa00(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  uVar2 = param_1[5];
  if (uVar2 == 0x3f) {
    return 0x103;
  }
  piVar3 = (int *)*param_1;
  iVar1 = *piVar3;
  if (param_1[4] == 0) {
    if ((int)uVar2 < 0) goto LAB_ram_4207aa56;
    FUN_ram_40394d60();
    *(uint *)(iVar1 + 0x54) = ~(1 << (uVar2 & 0x1f)) & *(uint *)(iVar1 + 0x54);
  }
  else {
    if ((int)uVar2 < 0) goto LAB_ram_4207aa56;
    FUN_ram_40394d60(0x103);
    *(uint *)(iVar1 + 0x58) = ~(1 << (uVar2 & 0x1f)) & *(uint *)(iVar1 + 0x58);
  }
  FUN_ram_40394d8e();
LAB_ram_4207aa56:
  FUN_ram_4207b94e(iVar1 + 8,piVar3[1],param_1[4]);
  param_1[5] = 0x3f;
  return 0;
}

