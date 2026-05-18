
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420860d8(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcc4014;
  FUN_ram_4207a038(1,4,3,&DAT_ram_3c0fff5c,DAT_ram_3fcc41a4);
  uVar2 = DAT_ram_3fcc41a5;
  if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + 0xe4), iVar3 != 0)) {
    *(undefined1 *)(iVar3 + 0xac) = DAT_ram_3fcc41a5;
    *(undefined1 *)(iVar1 + 299) = uVar2;
    uVar2 = DAT_ram_3fcc41a4;
    *(undefined1 *)(iVar3 + 0xab) = DAT_ram_3fcc41a4;
    *(undefined1 *)(iVar1 + 0x12a) = uVar2;
    FUN_ram_4207a038(1,0xc000,4,&DAT_ram_3c0fcc5c);
  }
  FUN_ram_4207c908(&DAT_ram_3fcc41a4);
  if (_DAT_ram_3fcc3fa8 != 0) {
    FUN_ram_420854ac();
    _DAT_ram_3fcc3fa8 = 0;
  }
  DAT_ram_3fcc41a7 = 0;
  return 0;
}

