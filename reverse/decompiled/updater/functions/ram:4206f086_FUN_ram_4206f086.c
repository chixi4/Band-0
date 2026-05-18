
undefined4 FUN_ram_4206f086(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 0, *(int *)(param_1 + 0x30) != 0)) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x60);
  }
  return uVar1;
}

