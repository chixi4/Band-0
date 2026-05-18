
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203644e(code *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)_DAT_ram_3fcb6be4;
  while ((piVar1 != (int *)0x0 && (iVar2 = (*param_1)(piVar1,param_2), iVar2 == 0))) {
    piVar1 = (int *)*piVar1;
  }
  return;
}

