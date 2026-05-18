
void FUN_ram_42069804(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    puVar1 = param_1 + param_2 + -1;
    for (; param_1 <= puVar1; param_1 = param_1 + 1) {
      uVar2 = (*(code *)&SUB_ram_400108cc)(*param_1);
      uVar3 = (*(code *)&SUB_ram_400108cc)(*puVar1);
      *param_1 = uVar3;
      *puVar1 = uVar2;
      puVar1 = puVar1 + -1;
    }
    return;
  }
  return;
}

