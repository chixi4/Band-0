
undefined4 FUN_ram_4209999e(undefined1 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) &&
     (puVar1 = (undefined1 *)thunk_FUN_ram_403904a6(0x28), puVar1 != (undefined1 *)0x0)) {
    FUN_ram_4039c11e(puVar1 + 8,param_2,param_3);
    *puVar1 = param_1;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    puVar1[1] = 0;
    uVar2 = FUN_ram_4207fb5a(1,puVar1);
    thunk_FUN_ram_40390634(puVar1);
    return uVar2;
  }
  return 0xffffffff;
}

