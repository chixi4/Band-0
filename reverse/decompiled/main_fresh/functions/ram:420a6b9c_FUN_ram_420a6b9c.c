
int FUN_ram_420a6b9c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_38 [3];
  undefined1 local_35 [5];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  if (*(int *)(param_1 + 0x58) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if ((*(uint *)(*(int *)(param_1 + 0x58) + -8) & 0xfffffffd) == 0) {
      return 0;
    }
  }
  *(undefined1 **)(param_1 + 0x60) = local_38;
  *(undefined1 **)(param_1 + 100) = local_35;
  iVar2 = FUN_ram_420a46ee(param_1,5);
  if (iVar2 == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x7c);
    iVar2 = 0x93d;
    *(uint *)(param_1 + 0x74) = (uint)**(byte **)(param_1 + 0x60);
    uVar4 = (uint)*(byte *)((int)*(ushort **)(param_1 + 100) + 1) |
            (**(ushort **)(param_1 + 100) & 0xff) << 8;
    *(uint *)(param_1 + 0x78) = uVar4;
    if (uVar4 != 0) {
      iVar2 = uVar4 + 0x13d;
    }
    if (bVar1) {
      uVar6 = *(undefined4 *)(param_1 + 0x58);
      FUN_ram_4039c11e(auStack_30,uVar6);
      FUN_ram_420a6940(uVar6);
      FUN_ram_420a68fc(param_1,0);
    }
    puVar3 = (undefined4 *)FUN_ram_4206d7ce(1,iVar2 + 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = iVar2;
      FUN_ram_420a68fc(param_1,puVar3 + 2);
      if (bVar1) {
        FUN_ram_4039c11e(*(undefined4 *)(param_1 + 0x5c),auStack_30,8);
        FUN_ram_4039c11e(*(undefined4 *)(param_1 + 0x68),auStack_28,8);
      }
      FUN_ram_4039c11e(*(undefined4 *)(param_1 + 0x60),local_38,uVar5);
      *(undefined4 *)(param_1 + 0x7c) = uVar5;
      *(undefined4 *)(param_1 + 0x78) = 0;
      return 0;
    }
    return -0x7f00;
  }
  return iVar2;
}

