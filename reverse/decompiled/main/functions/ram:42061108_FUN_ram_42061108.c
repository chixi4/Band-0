
void FUN_ram_42061108(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_28 [16];
  
  uVar1 = FUN_ram_4205f4fa();
  iVar2 = FUN_ram_420b59bc(uVar1,auStack_28);
  if ((iVar2 == 0) &&
     (((iVar2 = FUN_ram_420b59cc(uVar1), iVar2 == 0 ||
       (iVar2 = FUN_ram_420b59dc(uVar1,0x4204f6d0,param_1), iVar2 == 0)) &&
      (iVar2 = FUN_ram_42085142(0x4204f676,0x4204f67a), iVar2 == 0)))) {
    FUN_ram_4205f63a(param_1,auStack_28);
    thunk_FUN_ram_4205f656(param_1,param_2,param_3,param_4);
  }
  return;
}

