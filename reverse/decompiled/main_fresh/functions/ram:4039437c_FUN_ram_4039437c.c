
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039437c(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_a3;
  undefined4 extraout_a3;
  undefined4 in_a4;
  undefined4 extraout_a4;
  
  iVar1 = _DAT_ram_6004d000;
  do {
    if (9999 < (uint)(_DAT_ram_6004d000 - iVar1)) {
      return;
    }
    iVar2 = (**(code **)(_DAT_ram_3fcc4c78 + 0x48))
                      (99,1,0,in_a3,in_a4,*(code **)(_DAT_ram_3fcc4c78 + 0x48));
    in_a3 = extraout_a3;
    in_a4 = extraout_a4;
  } while (iVar2 != 0x5b);
  return;
}

