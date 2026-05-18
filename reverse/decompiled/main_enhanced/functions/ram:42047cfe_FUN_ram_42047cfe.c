
undefined4 FUN_ram_42047cfe(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 < 0) {
    return 0x102;
  }
  uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0x102;
  }
  else {
    iVar2 = FUN_ram_42048b72(param_1);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    FUN_ram_40396966();
    **(uint **)(&DAT_ram_3c0f7310 + param_1 * 4) =
         **(uint **)(&DAT_ram_3c0f7310 + param_1 * 4) | 0x80;
    FUN_ram_40396994();
    uVar3 = 0;
  }
  return uVar3;
}

