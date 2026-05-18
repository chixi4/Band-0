
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420253f4(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    (**(code **)(_DAT_ram_3fcb6a44 + 0x28))(piVar1 + 2);
    FUN_ram_40392fe4(*piVar1);
    FUN_ram_4204bc38(*piVar1);
    FUN_ram_403a3284(0x3fcb6a9c,piVar1);
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 2) = 0;
    *(undefined1 *)((int)param_1 + 3) = 0;
  }
  return;
}

