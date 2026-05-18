
undefined4
FUN_ram_4201d89a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_a4;
  undefined1 auStack_18 [4];
  int *apiStack_14 [2];
  
  FUN_ram_4201f4fc(auStack_18);
  iVar1 = FUN_ram_4201d4d4(param_1,apiStack_14);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*apiStack_14[0] + 0xc))
                      (apiStack_14[0],param_2,param_3,param_4,extraout_a4,
                       *(code **)(*apiStack_14[0] + 0xc));
  }
  else {
    uVar2 = 0x1107;
  }
  FUN_ram_4201f50c(auStack_18);
  return uVar2;
}

