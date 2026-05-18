
undefined4 FUN_ram_420301c8(char *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = 0x10;
  if (*param_1 != ' ') {
    uVar1 = FUN_ram_420301b4();
  }
  iVar2 = (*(code *)&SUB_ram_40011a00)(param_2,uVar1);
  uVar3 = 6;
  if (iVar2 != 0) {
    FUN_ram_4203012a(param_1);
    uVar3 = 0;
  }
  return uVar3;
}

