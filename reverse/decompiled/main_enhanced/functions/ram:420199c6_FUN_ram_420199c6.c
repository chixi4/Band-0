
void FUN_ram_420199c6(int param_1)

{
  int iVar1;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [12];
  
  iVar1 = FUN_ram_4201ee6a();
  if (iVar1 != 0) {
    iVar1 = FUN_ram_42021020("hunk_complete callback failed",0x1b8,iVar1,auStack_18);
    if (iVar1 != 0) {
      FUN_ram_4201eeb2(0);
    }
    iVar1 = thunk_FUN_ram_42020df4
                      (*(undefined4 *)("Language" + param_1 * 8 + 8),
                       *(undefined4 *)(&DAT_ram_3c0d1584 + param_1 * 8),0x3fcb9ecc,0xc80,auStack_14)
    ;
    if (iVar1 == 0) {
      FUN_ram_4201f2b0(0x14,0x14,0xa0,0xa0,0x3fcb9ecc);
    }
  }
  return;
}

