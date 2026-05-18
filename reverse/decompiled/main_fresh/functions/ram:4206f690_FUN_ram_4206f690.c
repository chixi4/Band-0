
undefined4 FUN_ram_4206f690(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_ram_4206f260(param_1,0);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_420683ba(param_1 + 8);
    if (0x7f < uVar2) {
      iVar1 = param_1 + 0x10;
      iVar3 = FUN_ram_4206835e(iVar1,0);
      if (((iVar3 != 0) && (uVar2 = FUN_ram_420683ba(iVar1), 1 < uVar2)) &&
         (iVar1 = FUN_ram_42068514(iVar1,param_1 + 8), iVar1 < 0)) {
        return 0;
      }
    }
  }
  return 0xffffbe00;
}

