
undefined4 FUN_ram_40395780(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = FUN_ram_40394d36();
  if (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x38)) {
    uVar1 = 0;
    goto LAB_ram_403957be;
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) + 1;
  uVar2 = (uint)*(char *)(param_1 + 0x45);
  if (uVar2 == 0xffffffff) {
    if (*(int *)(param_1 + 0x48) == 0) {
      if (*(int *)(param_1 + 0x24) == 0) goto LAB_ram_403957bc;
      iVar4 = FUN_ram_40396680(param_1 + 0x24);
    }
    else {
      iVar4 = FUN_ram_4039525a(param_1);
    }
    if ((iVar4 != 0) && (param_2 != (undefined4 *)0x0)) {
      *param_2 = 1;
    }
  }
  else {
    uVar5 = FUN_ram_40396256();
    if (uVar2 < uVar5) {
      *(char *)(param_1 + 0x45) = (char)((uVar2 + 1) * 0x1000000 >> 0x18);
    }
  }
LAB_ram_403957bc:
  uVar1 = 1;
LAB_ram_403957be:
  FUN_ram_40394d50(uVar3);
  return uVar1;
}

