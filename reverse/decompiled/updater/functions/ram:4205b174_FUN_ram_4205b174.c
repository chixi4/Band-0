
void FUN_ram_4205b174(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined1 *)param_1[3];
  uVar2 = FUN_ram_4205107e(*param_1,param_1[1],0x4204a2ac,param_1,0);
  *puVar1 = uVar2;
  if (*(char *)param_1[3] != -5) {
    thunk_FUN_ram_4205973a(param_1[2]);
    return;
  }
  return;
}

