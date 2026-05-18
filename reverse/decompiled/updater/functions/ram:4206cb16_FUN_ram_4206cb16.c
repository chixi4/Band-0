
undefined4 FUN_ram_4206cb16(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 0, *(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0)) {
    uVar1 = **(undefined4 **)(param_1 + 0x38);
  }
  return uVar1;
}

