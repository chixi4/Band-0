
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203e512(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_42033fd8(1,4,4,0x3c07b9bc,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
                   DAT_ram_3fcb4ee4);
  iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(0xc);
  if (iVar2 == 0) {
    FUN_ram_42033fd8(1,4,2,0x3c07fed8);
    return;
  }
  FUN_ram_40399daa(iVar2,param_1,6);
  iVar1 = _DAT_ram_3fcb4ee0;
  *(undefined4 *)(iVar2 + 8) = 0;
  if (iVar1 != 0) {
    iVar3 = FUN_ram_4203e432(param_1);
    if (iVar3 != 0) {
      FUN_ram_42033fd8(1,4,4,0x3c07b9fc);
                    /* WARNING: Could not recover jumptable at 0x4203e600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar2);
      return;
    }
    *(int *)(iVar2 + 8) = iVar1;
  }
  _DAT_ram_3fcb4ee0 = iVar2;
  DAT_ram_3fcb4ee4 = DAT_ram_3fcb4ee4 + '\x01';
  return;
}

