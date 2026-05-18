
void FUN_ram_420539d4(undefined4 param_1,undefined2 param_2,uint param_3)

{
  undefined4 *puVar1;
  
  if ((param_3 & 0xffffffbf) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  puVar1 = (undefined4 *)FUN_ram_420531dc(0xd);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_1;
    *(undefined2 *)(puVar1 + 2) = param_2;
    *(undefined2 *)((int)puVar1 + 10) = param_2;
    *(char *)(puVar1 + 3) = (char)param_3;
    *(undefined1 *)((int)puVar1 + 0xd) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 1;
  }
  return;
}

