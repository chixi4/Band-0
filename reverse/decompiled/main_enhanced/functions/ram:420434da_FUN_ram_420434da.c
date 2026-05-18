
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420434da(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uStack_1d;
  undefined1 auStack_1c [4];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  
  cVar1 = *(char *)(param_1 + 0x50);
  uVar2 = FUN_ram_42042f02();
  if (((cVar1 == '\b') && (*(char *)(param_1 + 0x50) != '\b')) &&
     ((*(byte *)(param_1 + 0x200) & 2) != 0)) {
    uStack_18 = *(undefined2 *)(param_1 + 8);
    uStack_16 = *(undefined2 *)(param_1 + 0x202);
    uStack_14 = *(undefined2 *)(param_1 + 0x204);
    uStack_1d = 2;
    iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x174))
                      (&uStack_18,6,auStack_1c,&uStack_1d,uStack_14,
                       *(code **)(_DAT_ram_3fcdfecc + 0x174));
    if (iVar3 != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0xce9,&DAT_ram_3c0f6eb0,iVar3,0);
    }
    *(byte *)(param_1 + 0x200) = *(byte *)(param_1 + 0x200) & 0xfd;
    return uVar2;
  }
  return uVar2;
}

