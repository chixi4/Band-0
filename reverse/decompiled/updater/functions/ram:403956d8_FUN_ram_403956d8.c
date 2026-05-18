
undefined4 FUN_ram_403956d8(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = FUN_ram_40394d36();
  if (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x38)) {
    uVar2 = 0;
    if (param_4 != 2) goto LAB_ram_40395744;
  }
  cVar1 = *(char *)(param_1 + 0x45);
  iVar6 = *(int *)(param_1 + 0x38);
  FUN_ram_403951b8(param_1,param_2,param_4);
  uVar3 = (uint)cVar1;
  if (uVar3 == 0xffffffff) {
    if (*(int *)(param_1 + 0x48) == 0) {
      if (*(int *)(param_1 + 0x24) != 0) {
        iVar6 = FUN_ram_40396680(param_1 + 0x24);
        goto LAB_ram_40395736;
      }
    }
    else if ((param_4 != 2) || (iVar6 == 0)) {
      iVar6 = FUN_ram_4039525a(param_1);
LAB_ram_40395736:
      if ((iVar6 != 0) && (param_3 != (undefined4 *)0x0)) {
        *param_3 = 1;
      }
    }
  }
  else {
    uVar5 = FUN_ram_40396256();
    if (uVar3 < uVar5) {
      *(char *)(param_1 + 0x45) = (char)((uVar3 + 1) * 0x1000000 >> 0x18);
    }
  }
  uVar2 = 1;
LAB_ram_40395744:
  FUN_ram_40394d50(uVar4);
  return uVar2;
}

