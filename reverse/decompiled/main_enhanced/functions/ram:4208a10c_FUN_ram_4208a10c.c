
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208a10c(int *param_1)

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
      FUN_ram_42089514(&DAT_ram_3fcc4004,3,0);
      return;
    }
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd660);
    FUN_ram_42089514(&DAT_ram_3fcc4004,0,0xcab0);
    iVar2 = FUN_ram_4207fec0();
    if (iVar2 != 0) {
      iVar1 = iVar1 + 4;
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar1);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar1);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar1,0x42075280,0);
                    /* WARNING: Could not recover jumptable at 0x4208a198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar1,1000,0);
      return;
    }
  }
  return;
}

