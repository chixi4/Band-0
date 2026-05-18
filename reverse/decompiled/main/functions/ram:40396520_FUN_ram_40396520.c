
undefined4 FUN_ram_40396520(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x3fcb84d8;
  }
  else {
    uVar1 = 0x3fcb84d0;
  }
  (*(code *)&SUB_ram_40010698)(0x3fcb84e0,param_1,uVar1,param_2,param_1 + -8);
  return 1;
}

