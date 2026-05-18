
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403a3284(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 3;
  }
  uVar2 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
  iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x844))(param_1,param_2);
  if (iVar3 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))(399,&DAT_ram_3c0f57b0,0,0);
  }
  for (piVar1 = *(int **)(param_1 + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    if ((int *)param_2 == piVar1) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0x195,&DAT_ram_3c0f57b0,0,0);
    }
  }
  (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar2);
  if (((*(byte *)(param_1 + 10) & 1) != 0) && (*(code **)(param_1 + 0x1c) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x403a330e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0x1c))(param_1,param_2,*(undefined4 *)(param_1 + 0x20));
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x403a3332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x850))(param_1,param_2);
  return uVar2;
}

