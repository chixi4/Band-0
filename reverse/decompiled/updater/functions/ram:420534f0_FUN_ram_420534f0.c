
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420534f0(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  _DAT_ram_3fcb67e8 = 0;
  while( true ) {
    while( true ) {
      do {
        uVar4 = (uint)_DAT_ram_3fcb67f2;
        if (uVar4 <= _DAT_ram_3fcb67e8) {
          return;
        }
        iVar3 = FUN_ram_420534ac();
      } while (iVar3 == 1);
      if (iVar3 != 2) break;
      iVar3 = FUN_ram_420534ac();
      if (iVar3 != 4) {
        return;
      }
      if (uVar4 <= _DAT_ram_3fcb67e8 + 1) {
        return;
      }
      sVar1 = FUN_ram_420534ac();
      uVar2 = FUN_ram_420534ac();
      uVar2 = uVar2 | sVar1 << 8;
      if (0x59f < (ushort)(uVar2 - 1)) {
        uVar2 = 0x5a0;
      }
      *(ushort *)(param_1 + 0x36) = uVar2;
    }
    if (iVar3 == 0) {
      return;
    }
    uVar4 = FUN_ram_420534ac();
    if (uVar4 < 2) break;
    _DAT_ram_3fcb67e8 = (_DAT_ram_3fcb67e8 - 2) + (short)uVar4;
  }
  return;
}

