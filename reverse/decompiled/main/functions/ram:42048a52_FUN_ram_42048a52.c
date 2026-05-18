
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42048a52(uint param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (-1 < (int)param_1) {
    uVar1 = (*(code *)&SUB_ram_40010974)(0x3f,0,param_1);
    if (((uVar1 & 1) == 0) || (1 < param_2 - 4U)) {
      uVar2 = 0x102;
    }
    else {
      FUN_ram_40396966();
      if (5 < param_1) {
        FUN_ram_4039bf1e();
      }
      _DAT_ram_6000805c = _DAT_ram_6000805c | 0x80000000;
      uVar1 = param_1 * -3 + 0x17;
      _DAT_ram_600080fc =
           param_2 << (uVar1 & 0x1f) |
           ~(7 << (uVar1 & 0x1f)) & (0x80000000U >> (param_1 & 0x1f) | _DAT_ram_600080fc | 0x80);
      **(uint **)(&DAT_ram_3c0f7310 + param_1 * 4) =
           **(uint **)(&DAT_ram_3c0f7310 + param_1 * 4) & 0xfffffffd;
      FUN_ram_40396994();
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

