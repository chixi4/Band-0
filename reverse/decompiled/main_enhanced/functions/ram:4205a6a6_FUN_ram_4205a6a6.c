
void FUN_ram_4205a6a6(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(&DAT_ram_3fcc2578 + param_1 * 0x18);
  if (*(int **)(&DAT_ram_3fcc2578 + param_1 * 0x18) != (int *)0x0) {
    do {
      piVar2 = (int *)*piVar1;
      if (piVar1[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      FUN_ram_42053ac4();
      FUN_ram_420531f8(9,piVar1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
    *(undefined4 *)(&DAT_ram_3fcc2578 + param_1 * 0x18) = 0;
  }
  (&DAT_ram_3fcc258c)[param_1 * 0x18] = 0;
  return;
}

