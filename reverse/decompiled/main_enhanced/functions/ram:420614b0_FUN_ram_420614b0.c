
int FUN_ram_420614b0(void)

{
  int iVar1;
  int iVar2;
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puStack_1c = &DAT_ram_3c0face8;
  uStack_14 = *(undefined4 *)(gp + -0x734);
  uStack_18 = 0;
  iVar1 = FUN_ram_4205f588(&puStack_1c);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_420612a2();
  }
  iVar2 = FUN_ram_420614aa();
  if ((iVar2 == 0) && (iVar2 = FUN_ram_42061356(), iVar2 == 0)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

