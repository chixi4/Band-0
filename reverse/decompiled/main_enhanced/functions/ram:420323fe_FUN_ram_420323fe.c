
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420323fe(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined2 uStack_34;
  char cStack_32;
  undefined1 auStack_30 [10];
  ushort uStack_26;
  byte bStack_24;
  
  iVar2 = FUN_ram_42031600(*(undefined4 *)(_DAT_ram_3fcb6bb8 + 0x2c),param_1);
  if (iVar2 != -1) {
    thunk_FUN_ram_4202b7dc();
    iVar4 = 0;
    bVar1 = false;
    while ((iVar3 = FUN_ram_42036622(iVar4), iVar3 != 0 && (*(int *)(iVar3 + 0x5c) != 0))) {
      iVar3 = *(int *)(iVar3 + 0x5c) + iVar2 * 4;
      iVar4 = iVar4 + 1;
      bVar1 = true;
      *(byte *)(iVar3 + 2) = *(byte *)(iVar3 + 2) | 0x80;
    }
    thunk_FUN_ram_4202b7f6();
    if (bVar1) {
      FUN_ram_4202bb3e();
    }
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_36 = 0;
    uStack_34 = (undefined2)param_1;
    cStack_32 = '\0';
    while( true ) {
      iVar2 = FUN_ram_4202cf00(&uStack_3c,auStack_30);
      if (iVar2 != 0) break;
      thunk_FUN_ram_4202b7dc();
      iVar2 = FUN_ram_42036716(&uStack_3c);
      if ((iVar2 == 0) || ((uStack_26 & 2) != 0)) {
        thunk_FUN_ram_4202b7f6();
        if ((bStack_24 & 1) == 0) {
          bStack_24 = bStack_24 | 1;
          FUN_ram_4202cf0a(auStack_30);
        }
      }
      else {
        thunk_FUN_ram_4202b7f6();
      }
      cStack_32 = cStack_32 + '\x01';
    }
  }
  return;
}

