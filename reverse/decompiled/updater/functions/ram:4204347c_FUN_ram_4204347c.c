
int FUN_ram_4204347c(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_42033924();
  if (iVar1 != 0) {
    uVar2 = FUN_ram_420339f8(param_1);
    uVar3 = FUN_ram_420433dc();
    if ((param_1 <= uVar3) && (uVar3 = FUN_ram_42043428(uVar2), uVar3 <= param_1)) {
      return iVar1;
    }
  }
  return 0;
}

