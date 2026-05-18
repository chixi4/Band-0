
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201da44(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcb3690;
  do {
    if (iVar1 == 0) {
LAB_ram_4201daa2:
      uVar2 = FUN_ram_4201ef92();
      FUN_ram_4201f2d2(uVar2,param_1);
      return;
    }
    uVar2 = FUN_ram_4201ef00(*(undefined4 *)(iVar1 + 8));
    iVar3 = FUN_ram_4039a1de(uVar2,param_1,0x10);
    if (iVar3 == 0) {
      do {
        FUN_ram_4201da28(&DAT_ram_3fcb3690,iVar1);
        iVar1 = _DAT_ram_3fcb3690;
        while( true ) {
          if (iVar1 == 0) goto LAB_ram_4201daa2;
          uVar2 = FUN_ram_4201ef00(*(undefined4 *)(iVar1 + 8));
          iVar3 = FUN_ram_4039a1de(uVar2,param_1,0x10);
          if (iVar3 == 0) break;
          iVar1 = *(int *)(iVar1 + 4);
        }
      } while( true );
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

