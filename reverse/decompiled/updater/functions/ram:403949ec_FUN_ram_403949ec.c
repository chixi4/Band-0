
undefined4 FUN_ram_403949ec(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x3fcb1030;
  }
  else {
    uVar1 = 0x3fcb1028;
  }
  (*(code *)&SUB_ram_40010698)(0x3fcb1038,param_1,uVar1,param_2,param_1 + -8);
  return 1;
}

