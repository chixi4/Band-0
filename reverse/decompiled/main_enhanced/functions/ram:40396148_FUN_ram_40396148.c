
undefined4 FUN_ram_40396148(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  
  if (param_1 == 0) {
    return 0x102;
  }
  if (((param_1 <= param_1 + param_2) && ((param_3 & 0xc) != 0xc)) && ((param_3 & 0x30) != 0x30)) {
    uStack_28 = 0;
    auStack_24[0] = 0;
    iVar1 = FUN_ram_403990da(param_1,param_2,&uStack_28,auStack_24);
    if (iVar1 != 0) {
      uVar2 = FUN_ram_403991a8(uStack_28,(param_3 & 0x20) >> 5);
      if (((param_3 & 2) != 0) || ((param_1 % uVar2 == 0 && (param_2 % uVar2 == 0)))) {
        if ((param_3 & 8) == 0) {
          if ((param_3 & 0x20) == 0) {
            return 0;
          }
        }
        else if ((param_3 & 2) == 0) {
          FUN_ram_40396966();
          iVar1 = FUN_ram_40399126(param_1,param_2);
          FUN_ram_40396994();
          if (iVar1 != 0) {
            return 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_ram_4039bf9e(0,0,0,0);
        }
      }
    }
  }
  return 0x102;
}

