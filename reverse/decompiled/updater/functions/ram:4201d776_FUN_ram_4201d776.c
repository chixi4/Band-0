
undefined4 FUN_ram_4201d776(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [2];
  undefined2 uStack_16;
  int *piStack_14;
  
  FUN_ram_4201f4fc(auStack_18);
  iVar1 = FUN_ram_4201d4d4(param_1,&piStack_14);
  if (iVar1 == 0) {
    uStack_16 = param_3;
    uVar2 = (**(code **)(*piStack_14 + 0x30))
                      (piStack_14,2,param_2,&uStack_16,2,*(code **)(*piStack_14 + 0x30));
  }
  else {
    uVar2 = 0x1107;
  }
  FUN_ram_4201f50c(auStack_18);
  return uVar2;
}

