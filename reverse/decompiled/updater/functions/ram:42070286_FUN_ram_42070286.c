
int FUN_ram_42070286(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x4c);
  iVar1 = FUN_ram_4206f590(uVar2);
  if (iVar1 == 0) {
    iVar1 = -0x6c00;
  }
  else {
    iVar1 = FUN_ram_4206f5bc(param_1,uVar2);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}

