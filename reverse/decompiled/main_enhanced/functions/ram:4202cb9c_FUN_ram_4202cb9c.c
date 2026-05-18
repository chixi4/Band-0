
void FUN_ram_4202cb9c(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined1 uStack_1c;
  int aiStack_18 [4];
  
  uStack_1c = 0xf;
  local_20 = param_1;
  uStack_1e = param_2;
  FUN_ram_4202c8b2(0x4201c94c,&local_20,1,aiStack_18);
  if (aiStack_18[0] != 0) {
    iVar1 = FUN_ram_42032344(*(undefined2 *)(aiStack_18[0] + 8),
                             *(undefined2 *)(aiStack_18[0] + 0x10));
    if (iVar1 == 0) {
      FUN_ram_4202fa3e(0xe,*(undefined2 *)(aiStack_18[0] + 8),*(undefined2 *)(aiStack_18[0] + 0x10),
                       1);
      FUN_ram_420322d6(*(undefined2 *)(aiStack_18[0] + 8));
    }
    FUN_ram_4202c84e(aiStack_18[0]);
    return;
  }
  return;
}

