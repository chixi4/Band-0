
undefined4 FUN_ram_4205b46a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4205b3fe(param_1,&DAT_ram_3fcc534c);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined1 *)(iVar1 + 9) = 2;
    *(char *)(iVar1 + 0xc) = *(char *)(iVar1 + 0xc) + '\x01';
    if (*(code **)(param_1 + 0x40) != (code *)0x0) {
      (**(code **)(param_1 + 0x40))(param_1,&DAT_ram_3fcc534c,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

