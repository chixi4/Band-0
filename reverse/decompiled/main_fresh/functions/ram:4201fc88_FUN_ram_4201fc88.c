
undefined4 FUN_ram_4201fc88(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_14 [12];
  
  iVar1 = thunk_FUN_ram_403904a6(10000);
  uVar2 = 0x101;
  if (iVar1 != 0) {
    iVar3 = FUN_ram_42021030(&DAT_ram_3c0f0920,0x1298,iVar1,auStack_14);
    if (iVar3 == 0) {
      thunk_FUN_ram_4202053c();
      thunk_FUN_ram_420205c6();
      thunk_FUN_ram_420205a6();
      thunk_FUN_ram_42020a10(iVar1);
      thunk_FUN_ram_40390634(iVar1);
      uVar2 = 0;
    }
    else {
      thunk_FUN_ram_40390634(iVar1);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

