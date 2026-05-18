
int FUN_ram_4208ba3e(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_42079332();
  if (iVar1 != 0) {
    uVar2 = FUN_ram_42079406(param_1);
    uVar3 = FUN_ram_4208b944();
    if ((param_1 <= uVar3) && (uVar3 = FUN_ram_4208b990(uVar2), uVar3 <= param_1)) {
      return iVar1;
    }
  }
  return 0;
}

