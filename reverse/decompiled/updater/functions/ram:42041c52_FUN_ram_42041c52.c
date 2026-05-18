
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42041c52(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_a4;
  int in_a5;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (in_a4 == 2) {
      if (in_a5 == 0xd) {
        DAT_ram_3fcb512c = 2;
        FUN_ram_42033fd8(1,4,4,0x3c07c1dc,0xd);
        FUN_ram_4203331e(*(undefined4 *)(iVar1 + 0xe4),0xb0,1);
        return;
      }
      if (in_a5 == 0) {
        FUN_ram_42040fac(&DAT_ram_3fcb4f74,3,0);
        return;
      }
      FUN_ram_42033fd8(1,4,4,0x3c07c214,in_a5);
      in_a5 = in_a5 << 8;
    }
    else {
      FUN_ram_42033fd8(1,4,4,0x3c07c1cc);
      in_a5 = 0xcab0;
    }
    FUN_ram_42040fac(&DAT_ram_3fcb4f74,0,in_a5);
    iVar2 = FUN_ram_420399ec();
    if (iVar2 != 0) {
      iVar1 = iVar1 + 4;
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar1);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar1);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar1,0x4202d67a,0);
                    /* WARNING: Could not recover jumptable at 0x42041ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar1,1000,0);
      return;
    }
  }
  return;
}

