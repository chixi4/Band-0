
void FUN_ram_4205eb80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [6];
  undefined2 uStack_12;
  
  uStack_12 = 0;
  local_20 = param_1;
  FUN_ram_4039c11e(auStack_1c);
  FUN_ram_4039c11e(auStack_18,param_3,6);
  FUN_ram_420b2e88(0x18ff1f,2,&local_20,0x10,0);
  return;
}

