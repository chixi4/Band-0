
void FUN_ram_4201f78c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined1 auStack_27 [19];
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0xc) == -1) {
    *(undefined4 *)(param_1 + 0xc) = 0xfffffffe;
    puVar2 = &local_30;
    while (auStack_27 + 0xb != (undefined1 *)((int)puVar2 + 1)) {
      *(undefined1 *)((int)puVar2 + 9) = 0xff;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    local_30 = 0xfffffffe;
    uStack_2c = *(undefined4 *)(param_1 + 0x10);
    uStack_28 = *(undefined1 *)(param_1 + 0x14);
    uStack_14 = FUN_ram_4201f77c(&local_30);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x50) + 0x14))
                      (*(int **)(param_1 + 0x50),*(undefined4 *)(param_1 + 8),&local_30,0x20);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      for (puVar2 = (undefined4 *)(param_1 + 0x18); (undefined4 *)(param_1 + 0x38) != puVar2;
          puVar2 = puVar2 + 1) {
        *puVar2 = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

