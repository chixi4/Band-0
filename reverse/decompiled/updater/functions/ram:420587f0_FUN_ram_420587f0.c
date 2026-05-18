
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420587f0(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*param_2 & 0xf0) != 0xe0) {
    return -6;
  }
  iVar2 = -6;
  piVar1 = _DAT_ram_3fcb67ac;
  if (*param_2 != _DAT_ram_3fcb681c) {
    while ((piVar1 != (int *)0x0 &&
           ((((*(byte *)((int)piVar1 + 0x39) & 0x20) == 0 ||
             (((param_1 != (int *)0x0 && (*param_1 != 0)) && (*param_1 != piVar1[1])))) ||
            (iVar2 = FUN_ram_42058762(piVar1,param_2), iVar2 == 0))))) {
      piVar1 = (int *)*piVar1;
    }
  }
  return iVar2;
}

