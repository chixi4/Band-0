
undefined4 FUN_ram_403961ee(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = FUN_ram_403991a8(param_1 >> 10 & 1,0);
    *param_2 = uVar1;
    return 0;
  }
  return 0x102;
}

