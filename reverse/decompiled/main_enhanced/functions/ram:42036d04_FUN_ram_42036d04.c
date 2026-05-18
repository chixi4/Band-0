
undefined4 FUN_ram_42036d04(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420365de(param_1);
  if (iVar1 == 0) {
    uVar2 = 7;
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = *(undefined1 *)(iVar1 + 0x34);
    }
    uVar2 = 0;
  }
  thunk_FUN_ram_4202b7f6();
  return uVar2;
}

