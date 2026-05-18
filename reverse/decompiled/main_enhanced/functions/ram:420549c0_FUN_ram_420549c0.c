
uint FUN_ram_420549c0(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if ((param_2 != 0) && (uVar1 = (uint)*(ushort *)(param_2 + 0x30), uVar1 != 0)) {
    if (uVar1 < 0x28) {
      uVar1 = 0x28;
    }
    uVar2 = uVar1 - 0x28;
    if (param_1 < (uVar1 - 0x28 & 0xffff)) {
      uVar2 = param_1;
    }
    param_1 = uVar2 & 0xffff;
  }
  return param_1;
}

