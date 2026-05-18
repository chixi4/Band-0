
void FUN_ram_42051c30(undefined4 param_1,undefined2 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_42051500(0xd);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_1;
    *(undefined2 *)(puVar1 + 2) = param_2;
    *(undefined2 *)((int)puVar1 + 10) = param_2;
    *(undefined1 *)(puVar1 + 3) = param_3;
    *(undefined1 *)((int)puVar1 + 0xd) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 1;
  }
  return;
}

