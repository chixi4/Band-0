
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205b586(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*param_2 & 0xf0) == 0xe0) && (uVar2 = 0xfffffffa, *param_2 != _DAT_ram_3fcc534c)) {
    if ((*(byte *)(param_1 + 0x39) & 0x20) != 0) {
      iVar1 = FUN_ram_4205b3fe();
      uVar2 = 0xffffffff;
      if (iVar1 != 0) {
        if (*(char *)(iVar1 + 9) == '\0') {
          if ((*(char *)(iVar1 + 0xc) == '\0') && (*(code **)(param_1 + 0x40) != (code *)0x0)) {
            (**(code **)(param_1 + 0x40))(param_1,param_2,1);
          }
          FUN_ram_4205b272(param_1,iVar1,0x16);
          FUN_ram_4205b1e4(iVar1,5);
          *(undefined1 *)(iVar1 + 9) = 1;
        }
        *(char *)(iVar1 + 0xc) = *(char *)(iVar1 + 0xc) + '\x01';
        uVar2 = 0;
      }
    }
    return uVar2;
  }
  return 0xfffffffa;
}

