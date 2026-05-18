
undefined4 FUN_ram_42024c0c(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4202491a(param_1,(param_3 >> 2) + (uint)((param_3 & 3) != 0));
  if (iVar1 == 0) {
    uVar2 = FUN_ram_42026302(*param_1,*(undefined2 *)((int)param_1 + 6),param_2,param_3);
    return uVar2;
  }
  return 0xfffffff0;
}

