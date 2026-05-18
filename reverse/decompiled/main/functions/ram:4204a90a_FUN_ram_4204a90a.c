
void FUN_ram_4204a90a(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    if (param_1 == 0) {
      return;
    }
    if ((param_1 & 1) != 0) {
      iVar2 = FUN_ram_40398fe2(iVar1);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf9e(0,0,0,0);
      }
      iVar2 = FUN_ram_4204a8da();
      if (iVar2 == 0) goto LAB_ram_4204a958;
      do {
        FUN_ram_4039bf1e();
LAB_ram_4204a958:
        iVar2 = FUN_ram_420b5384(0x4038259a,iVar1);
      } while (iVar2 != 0);
    }
    param_1 = param_1 >> 1;
    iVar1 = iVar1 + 1;
  } while( true );
}

