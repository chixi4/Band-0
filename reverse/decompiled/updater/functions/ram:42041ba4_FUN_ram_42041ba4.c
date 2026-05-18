
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42041ba4(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_a4;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (in_a4 == 2) {
      FUN_ram_42040fac(&DAT_ram_3fcb4f74,3,0);
      return;
    }
    FUN_ram_42033fd8(1,4,4,0x3c07c1b0);
    FUN_ram_42040fac(&DAT_ram_3fcb4f74,0,0xcab0);
    iVar2 = FUN_ram_420399ec();
    if (iVar2 != 0) {
      iVar1 = iVar1 + 4;
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar1);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar1);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar1,0x4202d67a,0);
                    /* WARNING: Could not recover jumptable at 0x42041c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar1,1000,0);
      return;
    }
  }
  return;
}

