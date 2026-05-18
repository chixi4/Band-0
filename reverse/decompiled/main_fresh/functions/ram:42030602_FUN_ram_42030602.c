
undefined4 FUN_ram_42030602(undefined4 param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = (*(code *)&SUB_ram_400119f4)(param_1,0,4,param_2);
  uVar1 = 4;
  if (iVar3 == 0) {
    uVar2 = (*(code *)&SUB_ram_40011938)(param_2);
    *param_2 = uVar2;
    uVar2 = (*(code *)&SUB_ram_40011938)(param_2 + 1);
    param_2[1] = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}

