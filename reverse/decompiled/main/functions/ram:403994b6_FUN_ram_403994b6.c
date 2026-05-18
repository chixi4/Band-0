
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_403994b6(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0xe;
  uVar2 = _DAT_ram_600c40c8 >> 3 & 3;
  if (uVar2 != 0) {
    iVar1 = (uVar2 != 1) + 0xf;
  }
  return param_2 << iVar1;
}

