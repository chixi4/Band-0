
undefined4 FUN_ram_4202c9ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    param_3 = FUN_ram_4202d4f2();
    uVar1 = 6;
    if (param_3 == 0) goto LAB_ram_4202c9ec;
    iVar2 = FUN_ram_42029a16(0xffff,param_2,0,param_3,0);
    uVar1 = 9;
    if (iVar2 != 0) goto LAB_ram_4202c9ec;
  }
  uVar1 = FUN_ram_4202d3be(param_1,param_2,param_3);
  param_3 = 0;
LAB_ram_4202c9ec:
  FUN_ram_4202fa3e(uVar1,param_1,param_2,0);
  (*(code *)&SUB_ram_40011a08)(param_3);
  return uVar1;
}

