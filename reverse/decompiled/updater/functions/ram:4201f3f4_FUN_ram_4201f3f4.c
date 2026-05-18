
void FUN_ram_4201f3f4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = *param_3;
  }
  (*(code *)&SUB_ram_400107fc)(uVar1,param_1,param_2);
  return;
}

