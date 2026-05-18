
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420558d4(int param_1)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = (uint)_DAT_ram_3fcc5322;
  if (uVar1 != 0) {
    _DAT_ram_3fcc5318 = 0;
    while (_DAT_ram_3fcc5318 < uVar1) {
      iVar4 = FUN_ram_420557aa();
      if (iVar4 != 1) {
        if (iVar4 == 2) {
          iVar4 = FUN_ram_420557aa();
          if (iVar4 != 4) {
            return;
          }
          if (uVar1 <= _DAT_ram_3fcc5318 + 1) {
            return;
          }
          sVar2 = FUN_ram_420557aa();
          uVar3 = FUN_ram_420557aa();
          uVar3 = uVar3 | sVar2 << 8;
          if (0x59f < (ushort)(uVar3 - 1)) {
            uVar3 = 0x5a0;
          }
          *(ushort *)(param_1 + 0x36) = uVar3;
        }
        else {
          if (iVar4 == 0) {
            return;
          }
          uVar5 = FUN_ram_420557aa();
          if (uVar5 < 2) {
            return;
          }
          _DAT_ram_3fcc5318 = (_DAT_ram_3fcc5318 - 2) + (short)uVar5;
        }
      }
    }
  }
  return;
}

