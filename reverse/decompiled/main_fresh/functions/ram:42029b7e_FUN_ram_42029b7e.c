
int FUN_ram_42029b7e(undefined4 param_1,int param_2,int *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined1 uStack_29;
  int iStack_28;
  int aiStack_24 [2];
  
  iVar2 = 8;
  if (param_2 == 4) {
    iVar2 = FUN_ram_42029616(param_3,2,&uStack_29);
    if (iVar2 == 0) {
      uStack_29 = 0;
      uVar6 = **(undefined2 **)*param_3;
      thunk_FUN_ram_4202b7dc();
      iVar2 = thunk_FUN_ram_42031542(param_1,4,0,aiStack_24);
      if (iVar2 == 0) {
        uVar1 = *(undefined2 *)(aiStack_24[0] + 10);
        thunk_FUN_ram_4202b7f6();
        iVar5 = *param_3;
        *param_3 = 0;
        (*(code *)&SUB_ram_400119dc)(iVar5,*(undefined2 *)(iVar5 + 0x10));
        puVar3 = (undefined1 *)FUN_ram_4202d5d8(3,2,iVar5);
        if (puVar3 == (undefined1 *)0x0) {
          uStack_29 = 0x11;
          iVar2 = 6;
          iVar5 = 0;
        }
        else {
          *puVar3 = (char)uVar1;
          puVar3[1] = (char)((ushort)uVar1 >> 8);
        }
      }
      else {
        thunk_FUN_ram_4202b7f6();
        iVar5 = 0;
      }
    }
    else {
      iVar5 = 0;
      uVar6 = 0;
    }
    iVar2 = FUN_ram_42029b02(param_1,4,iVar2,iVar5,2,uStack_29,0);
    if (iVar2 == 0) {
      thunk_FUN_ram_4202b7dc();
      iVar2 = thunk_FUN_ram_42031542(param_1,4,aiStack_24,&iStack_28);
      if (iVar2 == 0) {
        FUN_ram_4202c62e(iStack_28,uVar6);
        *(byte *)(iStack_28 + 0xe) = *(byte *)(iStack_28 + 0xe) | 1;
        uVar4 = FUN_ram_4202c63e();
        thunk_FUN_ram_4202b7f6();
        FUN_ram_4202fb50(param_1,4,uVar4);
      }
      else {
        thunk_FUN_ram_4202b7f6();
      }
    }
  }
  return iVar2;
}

