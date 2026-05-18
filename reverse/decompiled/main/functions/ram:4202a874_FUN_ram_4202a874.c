
void FUN_ram_4202a874(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 uStack_11;
  
  iVar2 = FUN_ram_42029616(param_3,2,&uStack_11);
  if (iVar2 == 0) {
    uVar1 = **(undefined2 **)*param_3;
    (*(code *)&SUB_ram_400119dc)((undefined4 *)*param_3,2);
    FUN_ram_4202997c(param_1,uVar1,param_3,&uStack_11);
  }
  return;
}

