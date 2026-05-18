
void FUN_ram_4202791e(int param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
                     undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_3c [14];
  undefined1 uStack_2e;
  undefined1 auStack_2d [6];
  undefined1 uStack_27;
  undefined1 auStack_26 [6];
  
  uVar1 = thunk_FUN_ram_420365de(*(undefined2 *)(param_1 + 10));
  FUN_ram_42036658(uVar1,auStack_3c);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_2 = uStack_27;
    FUN_ram_4039c11e(param_3,auStack_26,6);
    *param_4 = uStack_2e;
    puVar2 = auStack_2d;
  }
  else {
    *param_2 = uStack_2e;
    FUN_ram_4039c11e(param_3,auStack_2d,6);
    *param_4 = uStack_27;
    puVar2 = auStack_26;
  }
  FUN_ram_4039c11e(param_5,puVar2,6);
  return;
}

