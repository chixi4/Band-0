
undefined4 FUN_ram_420653c2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0x2c) == 1) {
    iVar2 = FUN_ram_420652cc();
    if (iVar2 == 0) {
LAB_ram_420653f8:
      iVar2 = FUN_ram_4206536c(param_1,*(undefined4 *)(iVar1 + 0x34));
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 0x34) = 0;
        *(undefined4 *)(iVar1 + 0x38) = 0;
        uVar4 = 5;
        uVar3 = 0;
        goto LAB_ram_420653e0;
      }
      goto LAB_ram_420653f2;
    }
  }
  else {
    if (*(int *)(iVar1 + 0x2c) == 4) goto LAB_ram_420653f8;
LAB_ram_420653f2:
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  uVar4 = 6;
  uVar3 = 0xffffffff;
LAB_ram_420653e0:
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  return uVar3;
}

