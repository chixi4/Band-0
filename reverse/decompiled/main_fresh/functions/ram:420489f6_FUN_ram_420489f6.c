
undefined4 FUN_ram_420489f6(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (-1 < param_1) {
    uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar2 = 0x102;
    if ((uVar1 & 1) != 0) {
      FUN_ram_40396966(0x102);
      **(uint **)(&DAT_ram_3c0f7310 + param_1 * 4) =
           **(uint **)(&DAT_ram_3c0f7310 + param_1 * 4) & 0xfffffffd;
      FUN_ram_40396994();
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

