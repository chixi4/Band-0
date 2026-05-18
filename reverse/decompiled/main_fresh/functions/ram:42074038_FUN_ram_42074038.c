
int FUN_ram_42074038(int param_1,int param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)(param_2 + 0x238);
  if (puVar1 != (undefined2 *)0x0) {
    FUN_ram_4039c11e(param_1,puVar1 + 1,*puVar1);
    param_1 = param_1 + (uint)**(ushort **)(param_2 + 0x238);
  }
  return param_1;
}

