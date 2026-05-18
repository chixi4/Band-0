
uint FUN_ram_42030048(byte *param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (uVar1 != *param_2) {
    return uVar1 - *param_2;
  }
  if (uVar1 == 0x20) {
    if (*(uint *)(param_2 + 4) <= *(uint *)(param_1 + 4)) {
      return (uint)(*(uint *)(param_2 + 4) < *(uint *)(param_1 + 4));
    }
  }
  else {
    if (uVar1 == 0x80) {
      uVar1 = FUN_ram_4039c0e0(param_1 + 1,param_2 + 1,0x10);
      return uVar1;
    }
    if (uVar1 == 0x10) {
      return (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)(param_2 + 2);
    }
  }
  return 0xffffffff;
}

