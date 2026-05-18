
void FUN_ram_420927d6(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (*(code *)&SUB_ram_40011c70)();
  uVar2 = 2;
  if (param_4 != 1) {
    uVar2 = 1;
  }
  (*(code *)&SUB_ram_40011cc4)(uVar1,uVar2,param_3);
  return;
}

