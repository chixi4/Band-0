
void FUN_ram_4204ff78(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int extraout_a2;
  uint uVar1;
  uint *extraout_a3;
  undefined8 uVar2;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (param_3 != 0) goto LAB_ram_4204ff8c;
  do {
    uVar2 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
    param_4 = extraout_a3;
LAB_ram_4204ff8c:
  } while (param_4 == (uint *)0x0);
  local_20 = 0x210;
  uStack_1e = FUN_ram_420523aa((int)((ulonglong)uVar2 >> 0x20));
  uStack_1c = *(undefined4 *)uVar2;
  uVar1 = *param_4;
  uStack_18 = 0;
  uStack_14 = 0;
  if (0x10 < uVar1) {
    *param_4 = 0x10;
    uVar1 = 0x10;
  }
  FUN_ram_4039c11e(param_3,&local_20,uVar1);
  return;
}

