
void FUN_ram_4205e67e(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined1 *)param_1[3];
  uVar2 = FUN_ram_42052d06(*param_1,param_1[1],0x4204d3ee,param_1,0);
  *puVar1 = uVar2;
  if (*(char *)param_1[3] != -5) {
    FUN_ram_4205c6fa(param_1[2]);
    return;
  }
  return;
}

