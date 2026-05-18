
void FUN_ram_420977a2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_ram_4039c08e(1,0x54);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[7] = 0xffffff;
    puVar1[0xd] = 0x78;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 9) = 0;
    *(undefined2 *)(puVar1 + 0xe) = 0xff;
    puVar1[0xf] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined1 *)(puVar1 + 0x14) = 0;
  }
  return;
}

