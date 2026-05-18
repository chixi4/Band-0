
undefined4 FUN_ram_420611e0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  
  FUN_ram_4205f4b8(param_2,*(undefined2 *)(param_1 + 0x70));
  if (((*(byte *)(param_1 + 0x7a) & 1) == 0) && (param_3 != 0)) {
    FUN_ram_4205f5c8(param_2,param_3);
  }
  uVar2 = FUN_ram_420658ce(param_2,*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x68));
  iVar3 = FUN_ram_420663cc(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x44),uVar2,
                           *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x68));
  if (-1 < iVar3) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x7c) + 0x68);
    if (*(int *)(*(int *)(param_1 + 0x7c) + 100) == 0) {
      uVar2 = FUN_ram_420658ce(param_2,iVar3);
      iVar3 = FUN_ram_420663cc(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x48),uVar2,
                               *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x68));
    }
    else {
      iVar3 = FUN_ram_420658ce(param_2,iVar3 << 1);
      iVar5 = *(int *)(param_1 + 0x7c);
      iVar3 = FUN_ram_4205e538(*(undefined4 *)(iVar5 + 100),*(undefined4 *)(iVar5 + 0x4c),iVar3,
                               *(int *)(iVar5 + 0x68) + iVar3);
    }
    if (-1 < iVar3) {
      if (param_4 != 0) {
        FUN_ram_4205f4da(param_2,0xff);
        cVar1 = (*(code *)&SUB_ram_400104a8)(param_4);
        FUN_ram_4205f4da(param_2,cVar1 + '\x01');
        FUN_ram_4205f4da(param_2,0x21);
        uVar2 = (*(code *)&SUB_ram_400104a8)(param_4);
        FUN_ram_4205f5a2(param_2,param_4,uVar2);
      }
      if ((*(byte *)(param_1 + 0x7a) & 1) != 0) {
        if (*(int *)(*(int *)(param_1 + 0x7c) + 0x8c) != 0) {
          FUN_ram_4205f4da(param_2,0xff);
          FUN_ram_4205f4da(param_2,*(int *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x8c) + 4) + 1U &
                                   0xff);
          FUN_ram_4205f4da(param_2,0x5c);
          FUN_ram_4205f5c8(param_2,*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x8c));
          if ((*(byte *)(param_1 + 0x7a) & 1) == 0) goto LAB_ram_4206127a;
        }
        if (param_3 != 0) {
          FUN_ram_4205f4da(param_2,0xff);
          FUN_ram_4205f4da(param_2,*(int *)(param_3 + 4) + 1U & 0xff);
          FUN_ram_4205f4da(param_2,0x5d);
          FUN_ram_4205f5c8(param_2,param_3);
        }
      }
LAB_ram_4206127a:
      if (*(int *)(param_1 + 0x4c) << 5 < 0) {
        uVar2 = FUN_ram_42062410();
        FUN_ram_4205f4da(param_2,0xff);
        FUN_ram_4205f4da(param_2,5);
        FUN_ram_4205f4da(param_2,0x72);
        puVar4 = (undefined1 *)FUN_ram_420658ce(param_2,4);
        *puVar4 = (char)((uint)uVar2 >> 0x18);
        puVar4[1] = (char)((uint)uVar2 >> 0x10);
        puVar4[2] = (char)((uint)uVar2 >> 8);
        puVar4[3] = (char)uVar2;
        *(undefined4 *)(param_1 + 0x50) = uVar2;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

