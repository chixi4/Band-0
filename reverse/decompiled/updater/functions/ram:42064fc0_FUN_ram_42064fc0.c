
undefined4 FUN_ram_42064fc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  
  if (param_2 != 0x13) {
    return 0;
  }
  iVar1 = FUN_ram_4205ea3a(0x13);
  *(int *)(param_1 + 0x328) = iVar1;
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x32c) = 0x13;
    uVar2 = FUN_ram_4205eab2(iVar1,0);
    iVar1 = FUN_ram_420658dc(uVar2,0x20);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x330) != 0) {
        FUN_ram_4206587c();
      }
      iVar3 = FUN_ram_4206582a(*(int *)(iVar1 + 4) + 5);
      *(int *)(param_1 + 0x330) = iVar3;
      if (iVar3 != 0) {
        puVar4 = (undefined1 *)FUN_ram_420658ce(iVar3,1);
        *puVar4 = 0xff;
        uVar2 = *(undefined4 *)(iVar1 + 4);
        pcVar5 = (char *)FUN_ram_420658ce(*(undefined4 *)(param_1 + 0x330),1);
        *pcVar5 = (char)uVar2 + '\x03';
        puVar4 = (undefined1 *)FUN_ram_420658ce(*(undefined4 *)(param_1 + 0x330),1);
        *puVar4 = 0x20;
        puVar4 = (undefined1 *)FUN_ram_420658ce(*(undefined4 *)(param_1 + 0x330),2);
        puVar4[1] = 0;
        *puVar4 = 0x13;
        if (*(int *)(iVar1 + 8) != 0) {
          FUN_ram_42063088(*(undefined4 *)(param_1 + 0x330),*(int *)(iVar1 + 8),
                           *(undefined4 *)(iVar1 + 4));
        }
        FUN_ram_4206587c(iVar1);
        return *(undefined4 *)(*(int *)(param_1 + 0x330) + 8);
      }
    }
    FUN_ram_4206587c(iVar1);
    FUN_ram_4205ea1a(*(undefined4 *)(param_1 + 0x328));
  }
  return 0;
}

