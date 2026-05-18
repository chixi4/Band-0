
void FUN_ram_4204eb82(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = 0x210;
  uStack_1e = FUN_ram_4205073e(param_2);
  uStack_1c = *param_1;
  uVar1 = *param_4;
  uStack_18 = 0;
  uStack_14 = 0;
  if (0x10 < uVar1) {
    *param_4 = 0x10;
    uVar1 = 0x10;
  }
  FUN_ram_40399daa(param_3,&local_20,uVar1);
  return;
}

