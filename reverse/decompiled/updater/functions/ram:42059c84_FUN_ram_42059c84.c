
undefined4 FUN_ram_42059c84(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_2 != 0) && (param_1 - 0x3cU < 4)) {
    iVar2 = (*(code *)&SUB_ram_40010488)(param_2,0,0x58);
    *(undefined4 *)(iVar2 + 4) = 0xc000;
    return 0;
  }
  puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
  *puVar1 = 9;
  return 0xffffffff;
}

