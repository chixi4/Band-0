
undefined4 FUN_ram_4201498c(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 < 0x10) {
    iVar3 = (*(code *)&SUB_ram_40010488)(param_2,0,0x58);
    *(undefined4 *)(iVar3 + 4) = 0x21b6;
    *(undefined2 *)(iVar3 + 8) = 1;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    *puVar1 = 9;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

