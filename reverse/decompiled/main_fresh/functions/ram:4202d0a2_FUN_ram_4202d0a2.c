
int FUN_ram_4202d0a2(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_34;
  undefined2 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_34 = 0x8030201;
  uStack_30 = 0x706;
  iVar2 = 0;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  while( true ) {
    uVar1 = *(undefined1 *)((int)&local_34 + iVar2);
    do {
      iVar3 = FUN_ram_4202cdc4(uVar1,&local_2c);
    } while (iVar3 == 0);
    if (iVar3 != 5) break;
    iVar2 = iVar2 + 1;
    if (iVar2 == 6) {
      return 0;
    }
  }
  return iVar3;
}

