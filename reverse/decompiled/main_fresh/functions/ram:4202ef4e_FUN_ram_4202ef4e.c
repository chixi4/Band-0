
undefined4 FUN_ram_4202ef4e(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4202b87e();
  if (iVar2 == 0) {
    uVar1 = 0x1e;
  }
  else {
    thunk_FUN_ram_4202b7dc();
    iVar2 = FUN_ram_420365de(param_1);
    uVar1 = 7;
    if (iVar2 != 0) {
      uVar1 = FUN_ram_4202ef08(iVar2,param_2);
    }
    thunk_FUN_ram_4202b7f6();
  }
  return uVar1;
}

