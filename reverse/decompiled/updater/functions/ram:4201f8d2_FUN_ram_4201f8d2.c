
undefined4 FUN_ram_4201f8d2(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0xc) & 0xfffffffd) == 0xfffffffc) {
    uVar1 = FUN_ram_4201f7fe(param_1,0xfffffff8);
    return uVar1;
  }
  return 0x110b;
}

