
void FUN_ram_420585f4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_ram_420585e2();
  if (iVar1 == 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x28);
    puVar2 = (undefined4 *)FUN_ram_42051500(10);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = 0;
      if (param_2 != (undefined4 *)0x0) {
        uVar3 = *param_2;
      }
      puVar2[1] = uVar3;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 3) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        *puVar2 = 0;
        *(undefined4 **)(param_1 + 0x28) = puVar2;
      }
      else {
        *puVar2 = *puVar4;
        *puVar4 = puVar2;
      }
    }
  }
  return;
}

