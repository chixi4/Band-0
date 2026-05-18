
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420192ac(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  iVar1 = FUN_ram_4201f03c();
  if (iVar1 != 0) {
    FUN_ram_42018dcc();
    return;
  }
  iVar1 = FUN_ram_4201ee6a();
  if (iVar1 != 0) {
    iVar1 = FUN_ram_42021020(&DAT_ram_3c0c9d80,0x1b8,iVar1,auStack_18);
    if (iVar1 != 0) {
      FUN_ram_4201eeb2(0);
    }
    iVar1 = _DAT_ram_3fcc5014;
    iVar2 = FUN_ram_4201605e();
    iVar4 = iVar1 * 0x18;
    if (iVar2 == 0) {
      uVar3 = *(undefined4 *)(&DAT_ram_3c0c7040 + iVar4);
    }
    else {
      uVar3 = *(undefined4 *)(&DAT_ram_3c0c7044 + iVar4);
    }
    iVar1 = iVar1 * 0x18;
    FUN_ram_4201f3fe(0x14,uVar3,"Check outcomes before debating."[iVar1]);
    iVar1 = thunk_FUN_ram_42020df4
                      (*(undefined4 *)("Check outcomes before debating." + iVar1 + 4),
                       *(undefined4 *)("Check outcomes before debating." + iVar1 + 8),0x3fcb97c4,
                       0x708,auStack_14);
    if (iVar1 == 0) {
      FUN_ram_4201f392(0x32,0x78,0x78,0x3fcb97c4);
    }
    if (*(char *)(gp + -0x7a0) == '\0') {
      FUN_ram_4201f108(0xf,0xaf);
    }
    else {
      FUN_ram_4201ef22();
      *(undefined1 *)(gp + -0x7a0) = 0;
    }
  }
  return;
}

