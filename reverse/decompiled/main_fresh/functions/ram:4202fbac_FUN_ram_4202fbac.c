
undefined4 FUN_ram_4202fbac(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_114 [4];
  undefined2 uStack_110;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  int iStack_108;
  
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  auStack_114[0] = 0x20;
  uStack_110 = (undefined2)param_1;
  uStack_10e = param_2;
  uStack_10c = param_3;
  FUN_ram_4202e186(auStack_114,param_1);
  uVar1 = 1;
  if (iStack_108 != 1) {
    uVar1 = 2;
  }
  return uVar1;
}

