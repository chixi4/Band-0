
undefined4 FUN_ram_42050388(undefined4 param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  
  piVar1 = (int *)FUN_ram_4204ed60();
  if (piVar1 != (int *)0x0) {
    if (param_2 == -0x7ffb9982) {
      bVar3 = *(byte *)(*piVar1 + 0x28);
      if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
        bVar3 = bVar3 & 0xfd;
      }
      else {
        bVar3 = bVar3 | 2;
      }
      *(byte *)(*piVar1 + 0x28) = bVar3;
      FUN_ram_4204ecbc(piVar1);
      return 0;
    }
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    *puVar2 = 0x58;
    FUN_ram_4204ecbc(piVar1);
  }
  return 0xffffffff;
}

