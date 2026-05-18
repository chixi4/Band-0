
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420588f4(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = -6;
  if (((*param_2 & 0xf0) == 0xe0) &&
     (iVar2 = -6, piVar1 = _DAT_ram_3fcb67ac, *param_2 != _DAT_ram_3fcb681c)) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
      if ((((*(byte *)((int)piVar1 + 0x39) & 0x20) != 0) &&
          (((param_1 == (int *)0x0 || (*param_1 == 0)) || (*param_1 == piVar1[1])))) &&
         (iVar3 = FUN_ram_42058858(piVar1,param_2), iVar2 != 0)) {
        iVar2 = iVar3;
      }
    }
  }
  return iVar2;
}

