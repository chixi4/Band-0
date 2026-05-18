
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420627e6(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    uVar3 = 0x102;
    if (param_3 < 4) {
      uVar3 = 0x103;
      if (_DAT_ram_3fcc53a8 != (int *)0x0) {
        uVar5 = *(uint *)(_DAT_ram_3fcc53a8[1] * 0x78 + param_2 * 0x14 + *_DAT_ram_3fcc53a8);
        FUN_ram_40396966(0x103);
        piVar2 = _DAT_ram_3fcc53a8;
        uVar5 = uVar5 & 3;
        puVar4 = (uint *)(*_DAT_ram_3fcc53a8 + param_2 * 0x14 + _DAT_ram_3fcc53a8[1] * 0x78);
        *puVar4 = *puVar4 & 0xfffffffc | param_3 & 3;
        FUN_ram_40399330(piVar2,param_2);
        if ((*(char *)((int)_DAT_ram_3fcc53a8 + param_2 + 0x18) != '\0') && (param_3 != uVar5)) {
          cVar1 = *(char *)((int)_DAT_ram_3fcc53a8 + uVar5 + 0x1e);
          if (cVar1 != '\0') {
            *(char *)((int)_DAT_ram_3fcc53a8 + uVar5 + 0x1e) = cVar1 + -1;
          }
          FUN_ram_420624ae(param_3);
        }
        FUN_ram_40396994();
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return 0x102;
}

