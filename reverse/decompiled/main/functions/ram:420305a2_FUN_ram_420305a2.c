
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420305a2(undefined2 param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((_DAT_ram_3fcb6bac != 0) &&
     (iVar1 = (*(code *)&SUB_ram_40011a44)(_DAT_ram_3fcb6bac + 4), iVar1 != 0)) {
    (*(code *)&SUB_ram_40010488)(iVar1,0,0x14);
    *(undefined2 *)(iVar1 + 4) = param_1;
  }
  return iVar1;
}

