
int FUN_ram_4203214c(int param_1,int param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)(param_2 + 0x23c);
  if (puVar1 != (undefined2 *)0x0) {
    FUN_ram_40399daa(param_1,puVar1 + 1,*puVar1);
    param_1 = param_1 + (uint)**(ushort **)(param_2 + 0x23c);
  }
  return param_1;
}

