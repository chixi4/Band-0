
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40391880(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int aiStack_24 [2];
  
  iVar1 = FUN_ram_4039da32();
  iVar2 = (*(code *)*_DAT_ram_3fcb0e08)(param_1);
  if (iVar2 != 0) {
    return;
  }
  if (iVar1 != 0) {
    pcVar3 = *(code **)(param_1[1] + 0x60);
    piVar4 = param_1;
    if (pcVar3 != (code *)0x0) goto LAB_ram_403918c8;
  }
  piVar4 = (int *)*param_1;
  pcVar3 = *(code **)(*piVar4 + 8);
LAB_ram_403918c8:
  iVar1 = (*pcVar3)(piVar4,param_2);
  if ((((param_3 != 0) && (iVar1 == 0)) && (iVar1 = (*pcVar3)(piVar4,aiStack_24), iVar1 == 0)) &&
     (*param_2 != aiStack_24[0])) {
    iVar1 = 0x6003;
  }
                    /* WARNING: Could not recover jumptable at 0x40391906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_DAT_ram_3fcb0e08[1])(param_1,iVar1);
  return;
}

