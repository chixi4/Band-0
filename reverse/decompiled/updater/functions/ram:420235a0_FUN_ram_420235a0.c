
undefined4 FUN_ram_420235a0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 - 0x100 & 0xfffffeff) == 0) {
    iVar1 = FUN_ram_420231fe(param_1 + 0x118,(param_3 >> 4) + param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_ram_420231fe(param_1,param_2,param_3 >> 1);
      return uVar2;
    }
  }
  return 0xffffffe0;
}

