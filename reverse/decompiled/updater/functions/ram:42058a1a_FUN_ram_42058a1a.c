
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_42058a1a(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(byte *)(param_1 + 0x39) & 1) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = false;
    if (*(int *)(param_1 + 4) != 0) {
      bVar2 = true;
      if (*(int *)(param_1 + 4) != _DAT_ram_3fcb5e68) {
        iVar1 = FUN_ram_42059006(_DAT_ram_3fcb5e68,param_1);
        return iVar1 != 0;
      }
    }
  }
  return bVar2;
}

