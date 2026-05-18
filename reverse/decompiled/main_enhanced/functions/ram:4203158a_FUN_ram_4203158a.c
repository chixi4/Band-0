
void FUN_ram_4203158a(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 auStack_14 [2];
  
  iVar1 = FUN_ram_42031542(param_1,param_2,auStack_14,&uStack_18);
  if (iVar1 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = auStack_14[0];
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uStack_18;
    }
  }
  return;
}

