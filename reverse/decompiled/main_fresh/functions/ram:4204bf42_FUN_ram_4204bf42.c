
undefined4 FUN_ram_4204bf42(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [4];
  int *apiStack_14 [3];
  
  FUN_ram_4204eeda(auStack_18);
  iVar1 = FUN_ram_4204bd38(param_1,apiStack_14);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*apiStack_14[0] + 0x24))();
  }
  else {
    uVar2 = 0x1107;
  }
  FUN_ram_4204eeea(auStack_18);
  return uVar2;
}

