
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202dfe4(uint param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)*(int *)(_DAT_ram_3fcb6ba0 + 0x154);
  piVar3 = (int *)0;
  while ((piVar2 = piVar1, piVar2 != (int *)0x0 && (*(ushort *)(piVar2 + 5) != param_1))) {
    piVar3 = piVar2;
    piVar1 = (int *)*piVar2;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)piVar3;
  }
  return;
}

