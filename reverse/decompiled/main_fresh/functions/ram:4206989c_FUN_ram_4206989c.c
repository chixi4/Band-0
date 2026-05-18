
uint FUN_ram_4206989c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = 0;
  uVar4 = 0;
  while (param_3 = param_3 + -1, param_3 != -1) {
    uVar5 = *(undefined4 *)(param_3 * 4 + param_1);
    uVar6 = *(undefined4 *)(param_2 + param_3 * 4);
    uVar2 = FUN_ram_42069798(uVar6,uVar5);
    uVar3 = FUN_ram_42069798(uVar5,uVar6);
    uVar4 = uVar4 | ~(uVar1 | uVar2) & uVar3;
    uVar1 = uVar1 | uVar2 | uVar3;
  }
  return uVar4;
}

