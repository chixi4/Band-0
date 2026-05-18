
void FUN_ram_4206ed9e(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_ram_42028e3e(*(int *)(param_1 + 0x38) + 0x14c);
  FUN_ram_42028e32(*(int *)(param_1 + 0x38) + 0x14c);
  iVar1 = *(int *)(param_1 + 0x38);
  uVar2 = FUN_ram_42028dc8(9);
  iVar1 = FUN_ram_42028f3c(iVar1 + 0x14c,uVar2,0);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_42029004(*(int *)(param_1 + 0x38) + 0x14c), iVar1 == 0)) {
    FUN_ram_42028e3e(*(int *)(param_1 + 0x38) + 0x158);
    FUN_ram_42028e32(*(int *)(param_1 + 0x38) + 0x158);
    iVar1 = *(int *)(param_1 + 0x38);
    uVar2 = FUN_ram_42028dc8(10);
    iVar1 = FUN_ram_42028f3c(iVar1 + 0x158,uVar2,0);
    if (iVar1 == 0) {
      FUN_ram_42029004(*(int *)(param_1 + 0x38) + 0x158);
      return;
    }
  }
  return;
}

