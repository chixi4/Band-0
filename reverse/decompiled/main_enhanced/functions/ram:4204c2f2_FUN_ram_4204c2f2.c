
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204c2f2(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcc1e98;
  do {
    if (iVar1 == 0) {
LAB_ram_4204c350:
      uVar2 = FUN_ram_4204e970();
      FUN_ram_4204ecb0(uVar2,param_1);
      return;
    }
    uVar2 = FUN_ram_4204e8de(*(undefined4 *)(iVar1 + 8));
    iVar3 = FUN_ram_4039c5aa(uVar2,param_1,0x10);
    if (iVar3 == 0) {
      do {
        FUN_ram_4204c2d6(&DAT_ram_3fcc1e98,iVar1);
        iVar1 = _DAT_ram_3fcc1e98;
        while( true ) {
          if (iVar1 == 0) goto LAB_ram_4204c350;
          uVar2 = FUN_ram_4204e8de(*(undefined4 *)(iVar1 + 8));
          iVar3 = FUN_ram_4039c5aa(uVar2,param_1,0x10);
          if (iVar3 == 0) break;
          iVar1 = *(int *)(iVar1 + 4);
        }
      } while( true );
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

