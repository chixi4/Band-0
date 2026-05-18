
undefined4 FUN_ram_4205b5c4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 0x7c) != '\0') {
    *(undefined1 *)(param_1 + 200) = 1;
    iVar1 = *(int *)(param_2 + 0x80);
    if (iVar1 == 0) {
      iVar1 = 5;
    }
    *(int *)(param_1 + 0xcc) = iVar1;
    iVar1 = *(int *)(param_2 + 0x84);
    if (iVar1 == 0) {
      iVar1 = 5;
    }
    *(int *)(param_1 + 0xd0) = iVar1;
    iVar1 = *(int *)(param_2 + 0x88);
    if (iVar1 == 0) {
      iVar1 = 3;
    }
    *(int *)(param_1 + 0xd4) = iVar1;
    thunk_FUN_ram_4206d27e(param_3,param_1 + 200);
  }
  iVar1 = *(int *)(param_2 + 0x8c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xd8);
    if (iVar2 == 0) {
      iVar2 = FUN_ram_40399d1a(1,6);
      *(int *)(param_1 + 0xd8) = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      FUN_ram_40399daa(iVar2,iVar1,6);
    }
    thunk_FUN_ram_4206d288(param_3,iVar2);
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    FUN_ram_4206d25c(param_3);
  }
  return 1;
}

