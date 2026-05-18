
undefined4 FUN_ram_42072c7e(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4207212e();
  if (iVar1 == 1) {
    iVar1 = FUN_ram_420685b4(param_2,1);
    if ((-1 < iVar1) && (iVar1 = FUN_ram_42068514(param_2,param_1 + 0x34), iVar1 < 0)) {
      return 0;
    }
    uVar2 = 0xffffb380;
  }
  else {
    uVar2 = 0xffffb080;
  }
  return uVar2;
}

