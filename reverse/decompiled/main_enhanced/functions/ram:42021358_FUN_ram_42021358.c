
void FUN_ram_42021358(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)&DAT_ram_3fcc16e4;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)(param_1,param_2,puVar1[1]);
    }
    puVar1 = puVar1 + 2;
  } while (puVar1 != (undefined4 *)0x3fcc1704);
  return;
}

