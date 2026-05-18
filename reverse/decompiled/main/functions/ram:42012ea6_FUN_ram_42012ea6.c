
int FUN_ram_42012ea6(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)("Make the version that feels safe first." + param_1 * 4 + 0x20);
  iVar1 = *(int *)(iVar2 + 4);
  if (iVar1 == -1) {
                    /* WARNING: Could not recover jumptable at 0x42012ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(iVar2 + 0x20))();
    return iVar1;
  }
  *(undefined4 *)(iVar2 + 4) = 0xffffffff;
  return iVar1;
}

