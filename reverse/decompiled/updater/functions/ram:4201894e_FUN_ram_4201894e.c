
int FUN_ram_4201894e(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [272];
  
  uVar2 = *(uint *)(*(int *)(param_1 + 8) + 4);
  if ((uVar2 & 0xfffffffd) == 0) {
    uStack_120 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
    uStack_11c = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
    iVar1 = FUN_ram_42019f5e(0,&uStack_120,auStack_118);
    if (iVar1 != 0) {
      return 0x1503;
    }
  }
  else if (uVar2 == 3) {
    uStack_124 = 0;
    iVar1 = FUN_ram_420195e2(*(undefined4 *)(param_1 + 4),0,0xc00,0,&uStack_124,&uStack_120);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_42019a08(uStack_124,1,auStack_118);
    if (iVar1 != 0) {
      thunk_FUN_ram_4201a616(uStack_120);
      return 0x1503;
    }
    thunk_FUN_ram_4201a616(uStack_120);
    return 0;
  }
  return 0;
}

