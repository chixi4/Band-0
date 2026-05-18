
void FUN_ram_420300fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_20 [24];
  
  iVar1 = (*(code *)&SUB_ram_400119f4)(param_2,param_3,param_4,auStack_20);
  if (iVar1 == 0) {
    FUN_ram_420300b4(param_1,auStack_20,param_4);
  }
  return;
}

