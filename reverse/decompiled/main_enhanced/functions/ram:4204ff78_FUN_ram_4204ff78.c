
void FUN_ram_4204ff78(undefined4 *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  uint uVar1;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((param_3 != 0) && (param_4 != (uint *)0x0)) {
    local_20 = 0x210;
    uStack_1e = FUN_ram_420523aa(param_2);
    uStack_1c = *param_1;
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
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

