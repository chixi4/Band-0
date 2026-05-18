
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42026078(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = FUN_ram_42025f08();
  piVar1 = _DAT_ram_3fcb6b64;
  if ((iVar3 == 0) && (_DAT_ram_3fcb6b64 != (int *)0x0)) {
    iVar3 = FUN_ram_403a5e02(1,0xd);
    piVar2 = _DAT_ram_3fcb6b64;
    *piVar1 = iVar3;
    if (*piVar2 != 0) {
      FUN_ram_4039c11e(*piVar2,0x3c0a8824,0xc);
      *(undefined1 *)(*_DAT_ram_3fcb6b64 + 0xc) = 0;
      iVar3 = FUN_ram_4203293e(&DAT_ram_3c0f5060);
      if ((iVar3 == 0) && (iVar3 = FUN_ram_4203289e(&DAT_ram_3c0f5060), iVar3 == 0)) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

