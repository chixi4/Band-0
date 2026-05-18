
int FUN_ram_42013eaa(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_ram_4039a06c(param_1,0x3c0705f4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4039a06c(param_1,0x3c0705f8);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      *puVar3 = 2;
      return -1;
    }
    iVar2 = 1;
  }
  *(byte *)(*(int *)(iVar2 * 4 + 0x3c074890) + 0x10) = (byte)(param_2 >> 0xe) & 1;
  return iVar2;
}

