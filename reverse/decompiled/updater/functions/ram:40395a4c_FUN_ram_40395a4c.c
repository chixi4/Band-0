
undefined4 FUN_ram_40395a4c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = FUN_ram_40394d36();
  iVar6 = *(int *)(param_1 + 0x38);
  if (iVar6 == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x44);
    FUN_ram_4039523a(param_1,param_2);
    uVar3 = (uint)cVar1;
    *(int *)(param_1 + 0x38) = iVar6 + -1;
    if (uVar3 == 0xffffffff) {
      if (((*(int *)(param_1 + 0x10) != 0) && (iVar6 = FUN_ram_40396680(param_1 + 0x10), iVar6 != 0)
          ) && (param_3 != (undefined4 *)0x0)) {
        *param_3 = 1;
      }
    }
    else {
      uVar5 = FUN_ram_40396256();
      if (uVar3 < uVar5) {
        *(char *)(param_1 + 0x44) = (char)((uVar3 + 1) * 0x1000000 >> 0x18);
      }
    }
    uVar2 = 1;
  }
  FUN_ram_40394d50(uVar4);
  return uVar2;
}

