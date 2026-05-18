
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42062914(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  if (param_1 == 0) {
    uVar2 = 0x102;
    if (param_2 < 4) {
      uVar2 = 0x103;
      if (_DAT_ram_3fcc53a8 != (int *)0x0) {
        FUN_ram_40396966(0x103);
        piVar1 = _DAT_ram_3fcc53a8;
        *(undefined1 *)((int)_DAT_ram_3fcc53a8 + param_2 + 0xc) = 0;
        puVar3 = (uint *)((piVar1[1] * 4 + param_2 + 0x14) * 8 + *piVar1);
        *puVar3 = *puVar3 & 0xffbfffff;
        FUN_ram_40396994();
        uVar2 = 0;
      }
    }
    return uVar2;
  }
  return 0x102;
}

