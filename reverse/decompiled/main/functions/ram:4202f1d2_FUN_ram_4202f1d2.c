
void FUN_ram_4202f1d2(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_12c;
  undefined4 uStack_128;
  undefined1 auStack_124 [268];
  
  (*(code *)&SUB_ram_40010488)(auStack_124,0,0x104);
  local_12c = 0;
  uStack_128 = 0;
  thunk_FUN_ram_4202b7dc();
  uVar1 = *(undefined2 *)(param_1 + 2);
  iVar2 = FUN_ram_420365de(uVar1);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 1) == '\0') {
      *(undefined2 *)(iVar2 + 0x1e) = *(undefined2 *)(param_1 + 4);
      *(undefined2 *)(iVar2 + 0x20) = *(undefined2 *)(param_1 + 6);
      *(undefined2 *)(iVar2 + 0x22) = *(undefined2 *)(param_1 + 8);
    }
    else if (((*(char *)(param_1 + 1) == '\x1a') && (iVar3 = FUN_ram_4202dfe4(uVar1,0), iVar3 != 0))
            && ((*(byte *)(iVar2 + 0x34) & 1) == 0)) {
      local_12c = *(uint *)(iVar3 + 4);
      uStack_128 = *(undefined4 *)(iVar3 + 8);
      iVar2 = FUN_ram_403a6810();
      iVar4 = FUN_ram_403a681e(40000);
      *(int *)(iVar3 + 0x10) = iVar2 + iVar4;
    }
  }
  if ((local_12c & 0xffff) == 0) {
    FUN_ram_4202e0c4(uVar1);
    FUN_ram_4202e1c6();
  }
  thunk_FUN_ram_4202b7f6();
  if ((local_12c & 0xffff) == 0) {
    iVar2 = 0;
    if (*(byte *)(param_1 + 1) != 0) {
      iVar2 = *(byte *)(param_1 + 1) + 0x200;
    }
  }
  else {
    iVar2 = FUN_ram_4202dc56(uVar1,&local_12c,0x4201f316,0);
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_ram_4202ef8a(uVar1,iVar2);
  return;
}

