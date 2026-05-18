
/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4201fce8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_18 [2];
  
  iVar1 = thunk_FUN_ram_403904a6(10000);
  if (iVar1 == 0) {
    thunk_FUN_ram_4202053c();
    thunk_FUN_ram_420205a6();
    goto LAB_ram_4201fd06;
  }
  iVar2 = FUN_ram_420174ae();
  if (iVar2 == 0) {
LAB_ram_4201fd5a:
    iVar2 = FUN_ram_42021030(&DAT_ram_3c0f0920,0x1298,iVar1,aiStack_18 + 1);
    if (iVar2 != 0) {
      thunk_FUN_ram_40390634(iVar1);
      thunk_FUN_ram_4202053c();
      thunk_FUN_ram_420205a6();
      thunk_FUN_ram_42020360();
      FUN_ram_4201fc28();
      return;
    }
  }
  else {
    iVar2 = FUN_ram_42017776();
    if (0x37ff < iVar2 - 1U) goto LAB_ram_4201fd5a;
    iVar3 = thunk_FUN_ram_403904a6(iVar2 + 1);
    if (iVar3 == 0) goto LAB_ram_4201fd5a;
    aiStack_18[0] = 0;
    iVar2 = FUN_ram_420175c0(iVar3,iVar2 + 1,aiStack_18);
    if (iVar2 != 0) {
      thunk_FUN_ram_40390634(iVar3);
      goto LAB_ram_4201fd5a;
    }
    *(undefined1 *)(iVar3 + aiStack_18[0]) = 0;
    aiStack_18[1] = 0;
    iVar2 = FUN_ram_42021030(iVar3,aiStack_18[0],iVar1,aiStack_18 + 1);
    thunk_FUN_ram_40390634(iVar3);
    if (iVar2 != 0) goto LAB_ram_4201fd5a;
  }
  thunk_FUN_ram_4202053c();
  thunk_FUN_ram_420205c6();
  thunk_FUN_ram_420205a6();
  thunk_FUN_ram_42020a10(iVar1);
  thunk_FUN_ram_40390634(iVar1);
LAB_ram_4201fd06:
  thunk_FUN_ram_42020360();
  FUN_ram_4201fc28();
  return;
}

