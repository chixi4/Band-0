
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_4207f3c6(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = (*(code *)&SUB_ram_40011f9c)(param_2);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined1 *)(iVar2 + 0x2f5);
    }
    return uVar1;
  }
  if ((_DAT_ram_3fcc4014 != 0) && (*(int *)(_DAT_ram_3fcc4014 + 0xe4) != 0)) {
    return *(undefined1 *)(*(int *)(_DAT_ram_3fcc4014 + 0xe4) + 0x2f5);
  }
  return 0;
}

