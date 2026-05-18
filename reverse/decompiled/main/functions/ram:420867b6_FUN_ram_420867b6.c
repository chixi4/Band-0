
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420867b6(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_42086758();
  if (iVar1 == 0) {
    FUN_ram_4207a038(1,5,1,&DAT_ram_3c0ff004,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
                     param_1[5]);
    iVar1 = 1;
  }
  else {
    FUN_ram_4207a038(1,5,4,&DAT_ram_3c0fcc1c,*(undefined1 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 5),
                     *(undefined1 *)(iVar1 + 6),*(undefined1 *)(iVar1 + 7),
                     *(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9));
    iVar1 = FUN_ram_420854ac(iVar1);
    if (iVar1 == 0) {
      _DAT_ram_3fcc3078 = _DAT_ram_3fcc3078 & 0xffffffef;
    }
    else if (iVar1 == 1) {
      _DAT_ram_3fcc3f84 = _DAT_ram_3fcc3f84 | 0x140;
    }
  }
  return iVar1;
}

