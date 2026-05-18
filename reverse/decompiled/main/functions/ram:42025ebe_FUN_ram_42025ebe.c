
void FUN_ram_42025ebe(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4203293e(&DAT_ram_3c0f4fb0);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4203289e(&DAT_ram_3c0f4fb0), iVar1 == 0)) {
    DAT_ram_3fcb6b5c = DAT_ram_3fcb6b5c | 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

