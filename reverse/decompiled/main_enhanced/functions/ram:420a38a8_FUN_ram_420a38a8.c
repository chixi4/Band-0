
int FUN_ram_420a38a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 8);
  }
  iVar1 = FUN_ram_420a34a4(param_1,param_4);
  if ((0 < iVar1) &&
     (iVar1 = FUN_ram_42051552(*(undefined4 *)(iVar3 + 0x70),param_2,param_3,0), iVar1 < 0)) {
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    FUN_ram_420a3590(param_1,*puVar2);
  }
  return iVar1;
}

