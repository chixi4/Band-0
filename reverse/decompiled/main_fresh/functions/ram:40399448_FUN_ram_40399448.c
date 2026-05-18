
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40399448(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0x4000;
  uVar3 = _DAT_ram_600c40c8 >> 3 & 3;
  if ((uVar3 != 0) && (iVar2 = 0x10000, uVar3 == 1)) {
    iVar2 = 0x8000;
  }
  bVar1 = false;
  if (param_1 < (uint)(iVar2 << 6)) {
    iVar2 = 0x4000;
    uVar3 = _DAT_ram_600c40c8 >> 3 & 3;
    if ((uVar3 != 0) && (iVar2 = 0x10000, uVar3 == 1)) {
      iVar2 = 0x8000;
    }
    bVar1 = false;
    if (param_2 < (uint)(iVar2 << 6)) {
      uVar3 = _DAT_ram_600c40c8 >> 3 & 3;
      iVar2 = 0x4000;
      if ((uVar3 != 0) && (iVar2 = 0x10000, uVar3 == 1)) {
        iVar2 = 0x8000;
      }
      bVar1 = (param_2 - 1) + param_1 < (uint)(iVar2 << 6);
    }
  }
  return bVar1;
}

