
undefined4 FUN_ram_4204bf7c(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [3];
  undefined1 uStack_15;
  int *piStack_14;
  
  FUN_ram_4204eeda(auStack_18);
  iVar1 = FUN_ram_4204bd38(param_1,&piStack_14);
  if (iVar1 == 0) {
    uStack_15 = param_3;
    uVar2 = (**(code **)(*piStack_14 + 0x30))
                      (piStack_14,0x11,param_2,&uStack_15,1,*(code **)(*piStack_14 + 0x30));
  }
  else {
    uVar2 = 0x1107;
  }
  FUN_ram_4204eeea(auStack_18);
  return uVar2;
}

