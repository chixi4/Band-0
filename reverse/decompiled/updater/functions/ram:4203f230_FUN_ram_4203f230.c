
void FUN_ram_4203f230(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)(param_1 + 0x24);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
  if ((*puVar1 & 0x40000) != 0) {
    iVar2 = iVar2 + 8;
  }
  iVar2 = FUN_ram_4203e862(iVar2 + 0x10);
  if (iVar2 != 0) {
    if (*(char *)((int)puVar1 + 0x13) == '\x01') {
      *(undefined1 *)(iVar2 + 0xa9) = 5;
    }
    else {
      FUN_ram_4203f1e2(iVar2,0xfffffffd,1);
    }
  }
  iVar2 = FUN_ram_4203d5ec();
  if (iVar2 != 0) {
    FUN_ram_4203dba6();
    return;
  }
  FUN_ram_4203d642(0,0);
  return;
}

