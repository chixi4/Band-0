
undefined4 FUN_ram_420135ce(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 < 2) {
    if ((param_2 == 0) && (iVar2 = FUN_ram_4201448c(), iVar2 == 0)) {
      return 0;
    }
    puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar3 = 0x16;
  }
  else {
    puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar3 = 9;
  }
  *puVar1 = uVar3;
  return 0xffffffff;
}

