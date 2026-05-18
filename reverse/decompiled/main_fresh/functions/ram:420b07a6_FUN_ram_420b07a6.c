
void FUN_ram_420b07a6(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = 0xffffffff;
  uStack_1c = 0xffffffff;
  uVar1 = FUN_ram_4039902c();
  iVar2 = FUN_ram_420127be(uVar1,&local_20,0);
  if (iVar2 < 0) {
    local_20 = 0xffffffff;
    uStack_1c = 0xffffffff;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_20;
    param_1[1] = uStack_1c;
  }
  return;
}

