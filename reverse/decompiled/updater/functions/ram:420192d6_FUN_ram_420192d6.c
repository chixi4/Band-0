
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420192d6(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((((_DAT_ram_3fcb66b8 != 0) || (iVar3 = FUN_ram_420190b6(), iVar3 == 0)) &&
      ((param_1 != 0xff || (param_2 == 0xff)))) &&
     (piVar1 = (int *)thunk_FUN_ram_4039047a(0x14), iVar3 = _DAT_ram_3fcb66b8, piVar1 != (int *)0x0)
     ) {
    *piVar1 = param_1;
    piVar1[1] = param_2;
    piVar1[2] = param_3;
    piVar1[3] = iVar3;
    piVar1[4] = 0;
    uVar2 = FUN_ram_42019248();
    return uVar2;
  }
  return 0;
}

