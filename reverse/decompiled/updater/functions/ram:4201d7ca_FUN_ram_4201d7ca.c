
undefined4 FUN_ram_4201d7ca(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [4];
  int *piStack_18;
  undefined4 uStack_14;
  
  FUN_ram_4201f4fc(auStack_1c);
  iVar1 = FUN_ram_4201d4d4(param_1,&piStack_18);
  if (iVar1 == 0) {
    uStack_14 = param_3;
    uVar2 = (**(code **)(*piStack_18 + 0x30))
                      (piStack_18,4,param_2,&uStack_14,4,*(code **)(*piStack_18 + 0x30));
  }
  else {
    uVar2 = 0x1107;
  }
  FUN_ram_4201f50c(auStack_1c);
  return uVar2;
}

