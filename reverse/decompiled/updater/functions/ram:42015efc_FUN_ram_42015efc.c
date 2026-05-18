
undefined4 FUN_ram_42015efc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_ram_4039a06c(param_1,0x3c070618);
  if (iVar2 == 0) {
    (*(code *)&SUB_ram_40010488)(param_2,0,0x58);
    *(undefined4 *)(param_2 + 4) = 0x21b6;
    *(undefined2 *)(param_2 + 8) = 1;
    uVar1 = 0;
  }
  else {
    puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    *puVar3 = 2;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

